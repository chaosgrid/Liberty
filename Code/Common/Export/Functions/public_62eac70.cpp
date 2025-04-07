#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b1480);
CLANG_FORWARD_PROC_SYMBOL(public_62ea770);
CLANG_FORWARD_PROC_SYMBOL(public_62ea960);
CLANG_FORWARD_PROC_SYMBOL(public_62eac70);
CLANG_FORWARD_PROC_SYMBOL(public_62eb020);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62eac9e _public_62eac9e
#define public_62eace9 _public_62eace9
#define public_62eaceb _public_62eaceb
#define public_62ead0b _public_62ead0b
#define public_62ead2a _public_62ead2a
#define public_62eadaf _public_62eadaf
#define public_62eadc8 _public_62eadc8
#define public_62eaddf _public_62eaddf
#define public_62eadf5 _public_62eadf5
#define public_62eadf9 _public_62eadf9
#define public_62eae1b _public_62eae1b
#define public_62eae1d _public_62eae1d
#define public_62eae43 _public_62eae43
#define public_62eae4f _public_62eae4f
#define public_62eae51 _public_62eae51
#define public_62eae62 _public_62eae62
#define public_62eae64 _public_62eae64
#define public_62eae90 _public_62eae90
#define public_62eae92 _public_62eae92
#define public_62eaeb1 _public_62eaeb1
#define public_62eaec2 _public_62eaec2
#define public_62eaecc _public_62eaecc
#define public_62eaee6 _public_62eaee6
#define public_62eaefe _public_62eaefe
#define public_62eaf00 _public_62eaf00
#define public_62eaf1e _public_62eaf1e
#define public_62eaf20 _public_62eaf20
#define public_62eaf31 _public_62eaf31
#define public_62eaf33 _public_62eaf33
#define public_62eaf60 _public_62eaf60
#define public_62eaf7a _public_62eaf7a
#define public_62eafa5 _public_62eafa5
#define public_62eafe3 _public_62eafe3
#define public_62eafe5 _public_62eafe5
#define public_62eaffd _public_62eaffd
#define public_62eb00e _public_62eb00e

PROC_DECLARE(0x62eac70, internal_62eac70, public_62eac70);
extern "C" NAKED register_t __cdecl internal_62eac70()
{
    __asm
    {
        sub esp, 0xEC
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+4]
        mov cl, byte ptr ds : [eax+0x147C]
        xor ebx, ebx
        test cl, 1
        mov dword ptr ss : [esp+0x10], ebx
        jne public_62eac9e
        pop ebp
        mov eax, 8
        pop ebx
        add esp, 0xEC
        ret 4
        public_62eac9e : nop
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, ebx
        je public_62eb00e
        add ecx, 0xFFFFFFF8
        cmp ecx, ebx
        je public_62eb00e
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        je public_62eb00e
        add ecx, 0xFFFFFFF8
        cmp ecx, ebx
        je public_62eb00e
        mov ecx, dword ptr ss : [ebp+0x1080]
        mov dword ptr ss : [esp+0x24], ebx
        mov eax, dword ptr ds : [eax+8]
        cmp eax, ebx
        mov byte ptr ss : [esp+0xB], 0
        mov dword ptr ss : [esp+0xC], ecx
        je public_62eace9
        lea ecx, ds:[eax-8]
        jmp public_62eaceb
        public_62eace9 : nop
        xor ecx, ecx
        public_62eaceb : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x24]
        push eax
        call dword ptr ds : [edx+0x74]
        test dword ptr ss : [ebp+0x10], 0x30000000
        je public_62ead0b
        mov byte ptr ss : [esp+0xB], 1
        mov dword ptr ss : [esp+0xC], 0
        public_62ead0b : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, ebx
        mov dl, byte ptr ds : [ecx+0xBC]
        mov dword ptr ss : [esp+0x14], 2
        mov byte ptr ss : [esp+9], dl
        je public_62ead2a
        lea ebx, ds:[eax-8]
        public_62ead2a : nop
        mov ax, word ptr ds : [public_63a4aa4]
        mov edx, dword ptr ds : [ebx]
        push esi
        push edi
        mov ecx, ebx
        mov word ptr ss : [esp+0x3C], ax
        call dword ptr ds : [edx+0x10]
        fld dword ptr ss : [ebp+0x20]
        fcomp dword ptr ds : [public_6399408]
        mov esi, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x4C]
        rep movsd
        fnstsw ax
        test ah, 0x41
        jp public_62eadaf
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x3C]
        xor eax, eax
        mov ax, word ptr ds : [public_63a4aa4]
        push eax
        push ecx
        push 0
        push edx
        push ebx
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, ebp
        call public_62ea960
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        lea ecx, ss:[esp+0x54]
        call public_62eb020
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x14]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ecx+0x172C]
        mov dword ptr ss : [ebp+0x20], edx
        public_62eadaf : nop
        mov eax, dword ptr ss : [ebp+0x830]
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0
        jbe public_62eaffd
        lea esi, ss:[ebp+0x30]
        public_62eadc8 : nop
        fld dword ptr ds : [esi+0x18]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_62eaddf
        mov al, byte ptr ds : [esi+4]
        test al, al
        jne public_62eadf5
        public_62eaddf : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_62eadf5
        mov bl, byte ptr ss : [esp+0x11]
        test bl, bl
        je public_62eaecc
        jmp public_62eadf9
        public_62eadf5 : nop
        mov bl, byte ptr ss : [esp+0x11]
        public_62eadf9 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jne public_62eaecc
        mov al, byte ptr ds : [esi+2]
        test al, al
        jne public_62eaecc
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        je public_62eae1b
        add eax, 0xFFFFFFF8
        jmp public_62eae1d
        public_62eae1b : nop
        xor eax, eax
        public_62eae1d : nop
        mov ecx, dword ptr ss : [ebp+0x1084]
        xor edx, edx
        mov dx, word ptr ds : [esi]
        push ecx
        push eax
        mov ecx, ebp
        push edx
        call public_62ea770
        cmp eax, 1
        mov dword ptr ss : [esp+0x1C], eax
        je public_62eae43
        test bl, bl
        je public_62eaecc
        public_62eae43 : nop
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        je public_62eae4f
        lea edx, ds:[eax-8]
        jmp public_62eae51
        public_62eae4f : nop
        xor edx, edx
        public_62eae51 : nop
        mov eax, dword ptr ss : [ebp+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62eae62
        add eax, 0xFFFFFFF8
        jmp public_62eae64
        public_62eae62 : nop
        xor eax, eax
        public_62eae64 : nop
        xor edi, edi
        mov di, word ptr ds : [public_63a4aa4]
        push 0xFFFFFFFF
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edi
        push edx
        push esi
        call dword ptr ds : [eax+0x44]
        mov eax, dword ptr ss : [ebp+4]
        add eax, 8
        mov byte ptr ss : [esp+0x12], 0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62eae90
        lea ecx, ds:[eax-8]
        jmp public_62eae92
        public_62eae90 : nop
        xor ecx, ecx
        public_62eae92 : nop
        mov edx, dword ptr ds : [ecx]
        push 0x3D567750
        push esi
        lea eax, ss:[esp+0x1A]
        push eax
        call dword ptr ds : [edx+0x10C]
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        jne public_62eaeb1
        test bl, bl
        je public_62eaec2
        public_62eaeb1 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov cx, word ptr ds : [esi]
        mov word ptr ss : [esp+eax*2+0x7C], cx
        inc eax
        mov dword ptr ss : [esp+0x18], eax
        public_62eaec2 : nop
        mov eax, dword ptr ss : [ebp+0x1088]
        test eax, eax
        je public_62eaee6
        public_62eaecc : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp+0x830]
        inc eax
        add esi, 0x20
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jb public_62eadc8
        public_62eaee6 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        test ebx, ebx
        jle public_62eaffd
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        je public_62eaefe
        add ecx, 0xFFFFFFF8
        jmp public_62eaf00
        public_62eaefe : nop
        xor ecx, ecx
        public_62eaf00 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        mov esi, eax
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x4C]
        rep movsd
        je public_62eaf1e
        lea esi, ds:[eax-8]
        jmp public_62eaf20
        public_62eaf1e : nop
        xor esi, esi
        public_62eaf20 : nop
        mov eax, dword ptr ss : [ebp+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62eaf31
        lea ecx, ds:[eax-8]
        jmp public_62eaf33
        public_62eaf31 : nop
        xor ecx, ecx
        public_62eaf33 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62eaf60
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_62eaf60
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, eax
        call public_62b1480
        test al, al
        jne public_62eaf7a
        public_62eaf60 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x24], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x28], eax
        public_62eaf7a : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x78], eax
        mov eax, dword ptr ds : [public_63fca58]
        test eax, eax
        mov dword ptr ss : [esp+0x70], ecx
        mov dword ptr ss : [esp+0x74], edx
        jne public_62eafa5
        call public_6391cf0
        mov dword ptr ds : [public_63fca58], eax
        public_62eafa5 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x14]
        push edx
        lea edx, ss:[esp+0x50]
        push edx
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ebp, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x48]
        add ebp, 8
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        mov ebp, dword ptr ss : [ebp]
        test ebp, ebp
        je public_62eafe3
        lea eax, ss:[ebp-8]
        jmp public_62eafe5
        public_62eafe3 : nop
        xor eax, eax
        public_62eafe5 : nop
        push 0xFFFFFFFF
        lea edx, ss:[esp+0x34]
        push edx
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push ebx
        lea edx, ss:[esp+0x88]
        push edx
        call dword ptr ds : [eax+0x34]
        public_62eaffd : nop
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xEC
        ret 4
        public_62eb00e : nop
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xEC
        ret 4
        UNREACHABLE_TRAP(0x62eac70)
    }
}

#undef public_62eac9e
#undef public_62eace9
#undef public_62eaceb
#undef public_62ead0b
#undef public_62ead2a
#undef public_62eadaf
#undef public_62eadc8
#undef public_62eaddf
#undef public_62eadf5
#undef public_62eadf9
#undef public_62eae1b
#undef public_62eae1d
#undef public_62eae43
#undef public_62eae4f
#undef public_62eae51
#undef public_62eae62
#undef public_62eae64
#undef public_62eae90
#undef public_62eae92
#undef public_62eaeb1
#undef public_62eaec2
#undef public_62eaecc
#undef public_62eaee6
#undef public_62eaefe
#undef public_62eaf00
#undef public_62eaf1e
#undef public_62eaf20
#undef public_62eaf31
#undef public_62eaf33
#undef public_62eaf60
#undef public_62eaf7a
#undef public_62eafa5
#undef public_62eafe3
#undef public_62eafe5
#undef public_62eaffd
#undef public_62eb00e
