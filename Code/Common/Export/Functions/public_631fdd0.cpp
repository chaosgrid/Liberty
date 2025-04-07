#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628e250);
CLANG_FORWARD_PROC_SYMBOL(public_6303220);
CLANG_FORWARD_PROC_SYMBOL(public_630e510);
CLANG_FORWARD_PROC_SYMBOL(public_631fdd0);
CLANG_FORWARD_PROC_SYMBOL(public_63222f0);

#define public_631fe16 _public_631fe16
#define public_631fe30 _public_631fe30
#define public_631fe4a _public_631fe4a
#define public_631fe59 _public_631fe59
#define public_631fe64 _public_631fe64
#define public_631fea9 _public_631fea9
#define public_631feb0 _public_631feb0
#define public_631feba _public_631feba
#define public_631fec7 _public_631fec7
#define public_631fedc _public_631fedc
#define public_631fefc _public_631fefc
#define public_631ff27 _public_631ff27

PROC_DECLARE(0x631fdd0, internal_631fdd0, public_631fdd0);
extern "C" NAKED register_t __cdecl internal_631fdd0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        mov dword ptr ss : [esp+0x20], edi
        je public_631ff27
        mov ecx, dword ptr ds : [public_63ed5d4]
        mov ebx, dword ptr ds : [edi+0x7C]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [edi+0x80]
        or eax, 0xFFFFFFFF
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_631fedc
        mov ecx, dword ptr ds : [public_64018e0]
        mov edx, dword ptr ds : [public_63ed5d8]
        public_631fe16 : nop
        mov ebp, dword ptr ds : [ebx]
        cmp ebp, dword ptr ds : [edi]
        jne public_631fe30
        fld dword ptr ds : [ebx+4]
        fcomp dword ptr ds : [public_63ed5d0]
        fnstsw ax
        test ah, 0x41
        je public_631ff27
        public_631fe30 : nop
        fld dword ptr ds : [ebx+4]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_631fec7
        test ecx, ecx
        jne public_631fe4a
        xor esi, esi
        jmp public_631fe59
        public_631fe4a : nop
        mov esi, dword ptr ds : [public_64018e4]
        sub esi, ecx
        sar esi, 2
        test esi, esi
        jne public_631fea9
        public_631fe59 : nop
        test edx, edx
        je public_631fea9
        mov eax, edx
        mov edi, offset public_63ed5d8
        public_631fe64 : nop
        push eax
        call public_630e510
        mov ecx, dword ptr ds : [public_64018e4]
        xor edx, edx
        add esp, 4
        mov dx, ax
        lea eax, ss:[esp+0x18]
        push eax
        push 1
        push ecx
        mov ecx, offset public_64018dc
        mov dword ptr ss : [esp+0x24], edx
        call public_628e250
        mov eax, dword ptr ds : [edi+4]
        add edi, 4
        inc esi
        test eax, eax
        jne public_631fe64
        mov ecx, dword ptr ds : [public_64018e0]
        mov edx, dword ptr ds : [public_63ed5d8]
        mov edi, dword ptr ss : [esp+0x20]
        public_631fea9 : nop
        xor eax, eax
        test esi, esi
        jle public_631feba
        nop 
        public_631feb0 : nop
        cmp ebp, dword ptr ds : [ecx+eax*4]
        je public_631fec7
        inc eax
        cmp eax, esi
        jl public_631feb0
        public_631feba : nop
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x10], eax
        public_631fec7 : nop
        mov eax, dword ptr ds : [edi+0x80]
        add ebx, 8
        cmp ebx, eax
        jne public_631fe16
        mov eax, dword ptr ss : [esp+0x14]
        public_631fedc : nop
        mov esi, dword ptr ds : [edi]
        cmp eax, esi
        je public_631ff27
        mov dword ptr ds : [edi], eax
        call public_6303220
        test al, al
        je public_631fefc
        mov dword ptr ds : [edi+0xC], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        public_631fefc : nop
        mov ecx, dword ptr ds : [edi+8]
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x24], ecx
        xor ebx, ebx
        push eax
        mov ecx, offset public_6401900
        mov dword ptr ss : [esp+0x2C], ebx
        call public_63222f0
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+0x10], esi
        mov dword ptr ds : [edi+0xC], ebx
        public_631ff27 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x631fdd0)
    }
}

#undef public_631fe16
#undef public_631fe30
#undef public_631fe4a
#undef public_631fe59
#undef public_631fe64
#undef public_631fea9
#undef public_631feb0
#undef public_631feba
#undef public_631fec7
#undef public_631fedc
#undef public_631fefc
#undef public_631ff27
