#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6299ac0);
CLANG_FORWARD_PROC_SYMBOL(public_629a210);
CLANG_FORWARD_PROC_SYMBOL(public_629b6d0);
CLANG_FORWARD_PROC_SYMBOL(public_62ac230);
CLANG_FORWARD_PROC_SYMBOL(public_62e7580);
CLANG_FORWARD_PROC_SYMBOL(public_62e9c50);
CLANG_FORWARD_PROC_SYMBOL(public_62ee280);
CLANG_FORWARD_PROC_SYMBOL(public_62ee530);
CLANG_FORWARD_PROC_SYMBOL(public_6391fbc);

#define public_62e9d0f _public_62e9d0f
#define public_62e9d38 _public_62e9d38
#define public_62e9d66 _public_62e9d66
#define public_62e9da0 _public_62e9da0
#define public_62e9dc8 _public_62e9dc8
#define public_62e9dca _public_62e9dca
#define public_62e9de7 _public_62e9de7
#define public_62e9de9 _public_62e9de9
#define public_62e9e94 _public_62e9e94
#define public_62e9ecf _public_62e9ecf
#define public_62e9edb _public_62e9edb
#define public_62e9edf _public_62e9edf
#define public_62e9f18 _public_62e9f18
#define public_62e9f1a _public_62e9f1a
#define public_62e9f67 _public_62e9f67
#define public_62e9f6b _public_62e9f6b
#define public_62e9f84 _public_62e9f84
#define public_62e9f94 _public_62e9f94
#define public_62e9fa0 _public_62e9fa0
#define public_62e9fb1 _public_62e9fb1
#define public_62e9fb3 _public_62e9fb3
#define public_62e9fc9 _public_62e9fc9
#define public_62e9feb _public_62e9feb
#define public_62ea014 _public_62ea014
#define public_62ea03d _public_62ea03d

PROC_DECLARE(0x62e9c50, internal_62e9c50, public_62e9c50);
extern "C" NAKED register_t __cdecl internal_62e9c50()
{
    __asm
    {
        sub esp, 0x38
        fld dword ptr ss : [esp+0x3C]
        push ebx
        push ebp
        mov ebp, ecx
        fadd dword ptr ss : [ebp+0x28]
        fst dword ptr ss : [esp+0x44]
        fst dword ptr ss : [ebp+0x28]
        fcomp dword ptr ss : [ebp+0x2C]
        fnstsw ax
        test ah, 0x41
        jne public_62ea03d
        fld dword ptr ss : [esp+0x44]
        push esi
        fld dword ptr ss : [ebp+0x2C]
        push edi
        call public_6391fbc
        fstp dword ptr ss : [ebp+0x28]
        fld dword ptr ss : [ebp+0x1084]
        mov ax, word ptr ds : [public_63a4aa4]
        fmul qword ptr ds : [public_639fa60]
        mov word ptr ss : [esp+0x28], ax
        mov eax, dword ptr ss : [ebp+4]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        fld st(0)
        mov edx, dword ptr ds : [eax]
        fmul st, st(1)
        xor edi, edi
        mov ecx, eax
        fstp dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x24], edi
        fstp st(0)
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62e9d0f
        mov eax, dword ptr ss : [ebp+4]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x74]
        mov eax, dword ptr ss : [esp+0x4C]
        cmp eax, edi
        mov dword ptr ss : [esp+0x24], eax
        je public_62e9d0f
        mov eax, dword ptr ss : [ebp+4]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x78]
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x28], edx
        public_62e9d0f : nop
        mov esi, dword ptr ss : [ebp+4]
        mov al, byte ptr ds : [esi+0x1579]
        add esi, 0x14FC
        test al, al
        jne public_62e9d38
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+8]
        push edx
        call dword ptr ds : [eax+0x88]
        mov byte ptr ds : [esi+0x7D], 1
        public_62e9d38 : nop
        mov ebx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [ebp+0x830]
        and bl, 0xA0
        neg bl
        sbb bl, bl
        inc bl
        cmp eax, edi
        mov byte ptr ss : [esp+0x12], bl
        mov byte ptr ss : [esp+0x13], 0
        mov dword ptr ss : [esp+0x30], edi
        jbe public_62e9feb
        lea eax, ss:[ebp+0x30]
        mov dword ptr ss : [esp+0x14], eax
        public_62e9d66 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov al, byte ptr ds : [ecx+2]
        test al, al
        je public_62e9fc9
        mov ecx, dword ptr ss : [ebp+4]
        xor edi, edi
        add ecx, 0x34
        mov dword ptr ss : [esp+0x1C], 0x7F7FFFFF
        mov dword ptr ss : [esp+0x20], edi
        call public_62e7580
        mov esi, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x38], eax
        je public_62e9f84
        mov edi, edi
        public_62e9da0 : nop
        mov ecx, dword ptr ss : [ebp+4]
        push esi
        add ecx, 0x142C
        call public_62ee530
        test al, al
        je public_62e9f6b
        mov eax, dword ptr ss : [ebp+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e9dc8
        lea ecx, ds:[eax-8]
        jmp public_62e9dca
        public_62e9dc8 : nop
        xor ecx, ecx
        public_62e9dca : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62e9de7
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_62e9de9
        public_62e9de7 : nop
        xor eax, eax
        public_62e9de9 : nop
        mov edx, dword ptr ss : [esp+0x14]
        xor ecx, ecx
        mov cx, word ptr ds : [edx]
        push ecx
        lea ecx, ds:[eax+0xE4]
        call public_629b6d0
        push eax
        call public_629a210
        add esp, 4
        test eax, eax
        je public_62e9f6b
        push 0
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, eax
        call public_6299ac0
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [esi+0x84]
        fld dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        fsub dword ptr ss : [esp+0x40]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x44]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62e9e94
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_62e9e94
        mov ecx, eax
        call public_62ac230
        test eax, eax
        je public_62e9e94
        cmp dword ptr ds : [eax+0x114], 2
        jne public_62e9e94
        test bl, bl
        je public_62e9f6b
        public_62e9e94 : nop
        mov al, byte ptr ds : [esi+0x7C]
        test al, al
        lea edi, ds:[esi+4]
        jne public_62e9edf
        mov ecx, dword ptr ds : [edi+0x7C]
        test ecx, ecx
        mov eax, dword ptr ds : [esi+0x84]
        mov dword ptr ds : [edi], 0
        mov dword ptr ds : [esi], 0
        je public_62e9ecf
        test eax, eax
        je public_62e9ecf
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        push esi
        call dword ptr ds : [edx+0x6C]
        neg eax
        sbb al, al
        inc al
        mov byte ptr ss : [esp+0x4C], al
        jne public_62e9edb
        public_62e9ecf : nop
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [edi], 0
        public_62e9edb : nop
        mov byte ptr ds : [edi+0x78], 1
        public_62e9edf : nop
        fld dword ptr ds : [esi]
        fcomp dword ptr ds : [public_63a0790]
        fnstsw ax
        test ah, 0x41
        jp public_62e9f6b
        fld dword ptr ss : [esp+0x18]
        mov byte ptr ss : [esp+0x13], 1
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        test ah, 0x41
        je public_62e9f6b
        mov eax, dword ptr ss : [ebp+4]
        add eax, 8
        mov byte ptr ss : [esp+0x4C], 0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e9f18
        lea edi, ds:[eax-8]
        jmp public_62e9f1a
        public_62e9f18 : nop
        xor edi, edi
        public_62e9f1a : nop
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [edi]
        push 0x3E99999A
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        lea edx, ss:[esp+0x58]
        push edx
        mov ecx, edi
        call dword ptr ds : [ebx+0x110]
        mov al, byte ptr ss : [esp+0x4C]
        test al, al
        je public_62e9f67
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 5
        jp public_62e9f67
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0x84]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], ecx
        public_62e9f67 : nop
        mov bl, byte ptr ss : [esp+0x12]
        public_62e9f6b : nop
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [edx+8]
        add esi, 0x88
        cmp esi, eax
        jne public_62e9da0
        mov edi, dword ptr ss : [esp+0x20]
        public_62e9f84 : nop
        cmp edi, dword ptr ss : [esp+0x24]
        jne public_62e9f94
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], eax
        jmp public_62e9fa0
        public_62e9f94 : nop
        mov cx, word ptr ds : [public_63a4aa4]
        mov word ptr ss : [esp+0x2C], cx
        public_62e9fa0 : nop
        mov eax, dword ptr ss : [ebp+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e9fb1
        add eax, 0xFFFFFFF8
        jmp public_62e9fb3
        public_62e9fb1 : nop
        xor eax, eax
        public_62e9fb3 : nop
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ss : [esp+0x2C]
        push 0xFFFFFFFF
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        push edi
        push eax
        call dword ptr ds : [edx+0x44]
        public_62e9fc9 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp+0x830]
        inc eax
        add edx, 0x20
        cmp eax, ecx
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x14], edx
        jb public_62e9d66
        public_62e9feb : nop
        mov esi, dword ptr ss : [ebp+4]
        mov al, byte ptr ds : [esi+0x1579]
        add esi, 0x14FC
        test al, al
        jne public_62ea014
        mov ecx, dword ptr ds : [esi+0x84]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+8]
        push eax
        call dword ptr ds : [edx+0x88]
        mov byte ptr ds : [esi+0x7D], 1
        public_62ea014 : nop
        test dword ptr ds : [esi+8], 0x7F0000
        pop edi
        pop esi
        jne public_62ea03d
        mov bl, byte ptr ss : [esp+0xB]
        xor ecx, ecx
        test bl, bl
        setne cl
        dec ecx
        and ecx, 2
        push ecx
        mov ecx, dword ptr ss : [ebp+4]
        add ecx, 0x142C
        call public_62ee280
        public_62ea03d : nop
        pop ebp
        pop ebx
        add esp, 0x38
        ret 4
        UNREACHABLE_TRAP(0x62e9c50)
    }
}

#undef public_62e9d0f
#undef public_62e9d38
#undef public_62e9d66
#undef public_62e9da0
#undef public_62e9dc8
#undef public_62e9dca
#undef public_62e9de7
#undef public_62e9de9
#undef public_62e9e94
#undef public_62e9ecf
#undef public_62e9edb
#undef public_62e9edf
#undef public_62e9f18
#undef public_62e9f1a
#undef public_62e9f67
#undef public_62e9f6b
#undef public_62e9f84
#undef public_62e9f94
#undef public_62e9fa0
#undef public_62e9fb1
#undef public_62e9fb3
#undef public_62e9fc9
#undef public_62e9feb
#undef public_62ea014
#undef public_62ea03d
