#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628be10);
CLANG_FORWARD_PROC_SYMBOL(public_628be40);
CLANG_FORWARD_PROC_SYMBOL(public_6348180);
CLANG_FORWARD_PROC_SYMBOL(public_6368780);
CLANG_FORWARD_PROC_SYMBOL(public_6368a30);
CLANG_FORWARD_PROC_SYMBOL(public_6368d30);

#define public_6368a41 _public_6368a41
#define public_6368a4f _public_6368a4f
#define public_6368a65 _public_6368a65
#define public_6368aa4 _public_6368aa4
#define public_6368ad9 _public_6368ad9
#define public_6368aff _public_6368aff
#define public_6368b25 _public_6368b25
#define public_6368b87 _public_6368b87
#define public_6368bb3 _public_6368bb3
#define public_6368bc0 _public_6368bc0
#define public_6368c0d _public_6368c0d
#define public_6368c20 _public_6368c20
#define public_6368c62 _public_6368c62
#define public_6368c8e _public_6368c8e
#define public_6368c9b _public_6368c9b
#define public_6368ccf _public_6368ccf
#define public_6368cda _public_6368cda
#define public_6368cf3 _public_6368cf3
#define public_6368d02 _public_6368d02
#define public_6368d1f _public_6368d1f
#define public_6368d26 _public_6368d26

PROC_DECLARE(0x6368a30, internal_6368a30, public_6368a30);
extern "C" NAKED register_t __cdecl internal_6368a30()
{
    __asm
    {
        sub esp, 0x64
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        imul eax, dword ptr ds : [ebx+8]
        dec eax
        push ebp
        js public_6368a4f
        public_6368a41 : nop
        dec eax
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [ecx+eax*4+4], 0
        jns public_6368a41
        public_6368a4f : nop
        xor ebp, ebp
        cmp word ptr ds : [ebx+0x26], bp
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0xC], ebp
        jbe public_6368cf3
        push esi
        push edi
        public_6368a65 : nop
        mov edx, dword ptr ds : [ebx+0x28]
        mov edi, dword ptr ds : [edx+ebp*4]
        mov esi, dword ptr ds : [edi+0x70]
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_6368aa4
        lea eax, ds:[edi+0xB8]
        push eax
        lea ecx, ds:[esi+0x94]
        call public_628be40
        fstp dword ptr ss : [esp+0x20]
        push edi
        lea ecx, ds:[esi+0xA4]
        call public_628be40
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x10]
        public_6368aa4 : nop
        mov esi, dword ptr ds : [edi+0x74]
        test esi, esi
        je public_6368ad9
        lea ecx, ds:[edi+0xC8]
        push ecx
        lea ecx, ds:[esi+0x94]
        call public_628be40
        fstp dword ptr ss : [esp+0x20]
        push edi
        lea ecx, ds:[esi+0xA4]
        call public_628be40
        fadd dword ptr ss : [esp+0x20]
        fsubr dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        public_6368ad9 : nop
        fld dword ptr ds : [public_658ab1c]
        fsub dword ptr ds : [edi+0x64]
        fld dword ptr ds : [public_63a53d0]
        fld st(1)
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_6368aff
        fstp st(0)
        fld dword ptr ds : [public_63a543c]
        public_6368aff : nop
        mov edx, dword ptr ds : [ebx+0x10]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [edx+ebp*4]
        mov eax, dword ptr ds : [edi+0x60]
        test eax, eax
        fstp st(0)
        je public_6368b25
        mov eax, dword ptr ss : [esp+0x7C]
        mov dword ptr ds : [eax], ebp
        add eax, 4
        mov dword ptr ss : [esp+0x7C], eax
        inc dword ptr ss : [esp+0x18]
        public_6368b25 : nop
        mov esi, dword ptr ds : [edi+0x70]
        test esi, esi
        je public_6368c20
        lea eax, ds:[esi+0x34]
        push eax
        lea ecx, ds:[edi+0xB8]
        push ecx
        lea ecx, ss:[esp+0x3C]
        call public_6368780
        lea edx, ss:[esp+0x34]
        push edx
        lea ecx, ss:[esp+0x38]
        call public_6348180
        fld dword ptr ds : [esi+0x40]
        fmul dword ptr ds : [public_63a5498]
        push ecx
        lea ecx, ss:[esp+0x48]
        fstp dword ptr ss : [esp]
        push edi
        call public_628be10
        mov ecx, dword ptr ds : [edi+0x58]
        mov eax, dword ptr ds : [edi+0x70]
        xor edx, edx
        cmp word ptr ds : [ecx+2], dx
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x20], edx
        jbe public_6368c20
        public_6368b87 : nop
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax+edx*4]
        mov eax, dword ptr ds : [eax+0x40]
        movsx esi, word ptr ds : [eax+0x50]
        test esi, esi
        jl public_6368c0d
        mov eax, dword ptr ds : [ebx+0x28]
        mov ebp, dword ptr ds : [eax+esi*4]
        mov eax, dword ptr ss : [esp+0x28]
        cmp dword ptr ss : [ebp+0x70], eax
        jne public_6368bb3
        xor eax, eax
        mov dword ptr ss : [esp+0x1C], 0xBF800000
        jmp public_6368bc0
        public_6368bb3 : nop
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov eax, 1
        public_6368bc0 : nop
        cmp dword ptr ss : [ebp+eax*4+0x70], 0
        je public_6368c0d
        shl eax, 4
        lea ecx, ds:[eax+ebp+0xB8]
        push ecx
        lea ecx, ss:[esp+0x38]
        call public_628be40
        fstp dword ptr ss : [esp+0x2C]
        push ebp
        lea ecx, ss:[esp+0x48]
        call public_628be40
        imul esi, dword ptr ds : [ebx+8]
        fadd dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ss : [esp+0x30]
        add esi, eax
        lea esi, ds:[edx+esi*4]
        mov edx, dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        public_6368c0d : nop
        xor eax, eax
        mov ax, word ptr ds : [ecx+2]
        inc edx
        mov dword ptr ss : [esp+0x20], edx
        cmp edx, eax
        jl public_6368b87
        public_6368c20 : nop
        mov esi, dword ptr ds : [edi+0x74]
        test esi, esi
        je public_6368cda
        lea ecx, ds:[esi+0x34]
        push ecx
        lea edx, ds:[edi+0xC8]
        push edx
        lea ecx, ss:[esp+0x6C]
        call public_6368780
        fld dword ptr ds : [esi+0x40]
        push ecx
        fstp dword ptr ss : [esp]
        push edi
        lea ecx, ss:[esp+0x5C]
        call public_628be10
        mov ebp, dword ptr ds : [edi+0x5C]
        mov eax, dword ptr ds : [edi+0x74]
        xor edi, edi
        cmp word ptr ss : [ebp+2], di
        mov dword ptr ss : [esp+0x30], eax
        jbe public_6368cda
        public_6368c62 : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ecx+edi*4]
        mov eax, dword ptr ds : [edx+0x40]
        movsx esi, word ptr ds : [eax+0x50]
        test esi, esi
        jl public_6368ccf
        mov ecx, dword ptr ds : [ebx+0x28]
        mov eax, dword ptr ds : [ecx+esi*4]
        mov edx, dword ptr ss : [esp+0x30]
        cmp dword ptr ds : [eax+0x70], edx
        jne public_6368c8e
        xor ecx, ecx
        mov dword ptr ss : [esp+0x24], 0xBF800000
        jmp public_6368c9b
        public_6368c8e : nop
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov ecx, 1
        public_6368c9b : nop
        mov edx, dword ptr ds : [eax+ecx*4+0x70]
        test edx, edx
        je public_6368ccf
        lea edx, ss:[esp+0x54]
        push edx
        lea edx, ss:[esp+0x68]
        push edx
        push ecx
        push eax
        call public_6368d30
        imul esi, dword ptr ds : [ebx+8]
        fmul dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0x10
        add esi, eax
        mov eax, dword ptr ds : [ebx+0xC]
        lea esi, ds:[eax+esi*4]
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        public_6368ccf : nop
        xor ecx, ecx
        mov cx, word ptr ss : [ebp+2]
        inc edi
        cmp edi, ecx
        jl public_6368c62
        public_6368cda : nop
        mov ebp, dword ptr ss : [esp+0x14]
        xor edx, edx
        mov dx, word ptr ds : [ebx+0x26]
        inc ebp
        mov dword ptr ss : [esp+0x14], ebp
        cmp ebp, edx
        jl public_6368a65
        pop edi
        pop esi
        public_6368cf3 : nop
        mov eax, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ds : [eax+0x20]
        xor edx, edx
        test eax, eax
        pop ebp
        pop ebx
        je public_6368d26
        public_6368d02 : nop
        mov ecx, dword ptr ds : [eax+0x40]
        mov cx, word ptr ds : [ecx+0x50]
        test cx, cx
        jl public_6368d1f
        movsx ecx, cx
        cmp ecx, edx
        je public_6368d1f
        mov dword ptr ds : [0], 0
        public_6368d1f : nop
        mov eax, dword ptr ds : [eax]
        inc edx
        test eax, eax
        jne public_6368d02
        public_6368d26 : nop
        mov eax, dword ptr ss : [esp+8]
        add esp, 0x64
        ret 8
        UNREACHABLE_TRAP(0x6368a30)
    }
}

#undef public_6368a41
#undef public_6368a4f
#undef public_6368a65
#undef public_6368aa4
#undef public_6368ad9
#undef public_6368aff
#undef public_6368b25
#undef public_6368b87
#undef public_6368bb3
#undef public_6368bc0
#undef public_6368c0d
#undef public_6368c20
#undef public_6368c62
#undef public_6368c8e
#undef public_6368c9b
#undef public_6368ccf
#undef public_6368cda
#undef public_6368cf3
#undef public_6368d02
#undef public_6368d1f
#undef public_6368d26
