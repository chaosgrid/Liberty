#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62eceb0);

#define public_62ecefa _public_62ecefa
#define public_62ecf28 _public_62ecf28
#define public_62ecf53 _public_62ecf53
#define public_62ecf55 _public_62ecf55

PROC_DECLARE(0x62eceb0, internal_62eceb0, public_62eceb0);
extern "C" NAKED register_t __cdecl internal_62eceb0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        mov ecx, edi
        call dword ptr ds : [eax+0xBC]
        test al, al
        jne public_62ecf55
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        fadd dword ptr ds : [esi+0x20]
        xor ebx, ebx
        sub eax, ebx
        fst dword ptr ds : [esi+0x20]
        je public_62ecf28
        dec eax
        je public_62ecefa
        dec eax
        jne public_62ecf53
        fcomp dword ptr ds : [esi+0x18]
        fnstsw ax
        test ah, 1
        jne public_62ecf55
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x20], ebx
        pop esi
        pop ebx
        ret 8
        public_62ecefa : nop
        fcomp dword ptr ds : [esi+0x14]
        fnstsw ax
        test ah, 1
        jne public_62ecf55
        mov edx, dword ptr ds : [edi+4]
        xor eax, eax
        mov ax, word ptr ds : [esi+0xC]
        push 0xFFFFFFFF
        lea ecx, ds:[edi+4]
        push 1
        push eax
        call dword ptr ds : [edx+0x58]
        pop edi
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+4], 2
        pop esi
        pop ebx
        ret 8
        public_62ecf28 : nop
        mov eax, dword ptr ds : [esi+0x10]
        fstp st(0)
        cmp eax, ebx
        jle public_62ecf55
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+4]
        fcomp dword ptr ds : [esi+0x1C]
        fnstsw ax
        test ah, 0x41
        jp public_62ecf55
        pop edi
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+4], 1
        pop esi
        pop ebx
        ret 8
        public_62ecf53 : nop
        fstp st(0)
        public_62ecf55 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62eceb0)
    }
}

#undef public_62ecefa
#undef public_62ecf28
#undef public_62ecf53
#undef public_62ecf55
