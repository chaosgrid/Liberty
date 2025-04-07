#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ab97);

#define public_6d5abbb _public_6d5abbb
#define public_6d5abcc _public_6d5abcc
#define public_6d5abda _public_6d5abda
#define public_6d5abfc _public_6d5abfc
#define public_6d5ac30 _public_6d5ac30
#define public_6d5ac47 _public_6d5ac47
#define public_6d5ac55 _public_6d5ac55
#define public_6d5ac77 _public_6d5ac77
#define public_6d5ac95 _public_6d5ac95

PROC_DECLARE(0x6d5ab97, internal_6d5ab97, public_6d5ab97);
extern "C" NAKED register_t __cdecl internal_6d5ab97()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ebx+0x30]
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        mov edi, dword ptr ds : [ebx+0x34]
        cmp edx, edi
        mov dword ptr ss : [ebp-8], eax
        mov dword ptr ss : [ebp+8], edx
        jbe public_6d5abbb
        mov edi, dword ptr ds : [ebx+0x2C]
        public_6d5abbb : nop
        mov eax, dword ptr ds : [esi+0x10]
        sub edi, edx
        cmp edi, eax
        mov dword ptr ss : [ebp-4], edi
        jbe public_6d5abcc
        mov dword ptr ss : [ebp-4], eax
        mov edi, eax
        public_6d5abcc : nop
        test edi, edi
        je public_6d5abda
        cmp dword ptr ss : [ebp+0x10], 0xFFFFFFFB
        jne public_6d5abda
        and dword ptr ss : [ebp+0x10], 0
        public_6d5abda : nop
        add dword ptr ds : [esi+0x14], edi
        sub eax, edi
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6d5abfc
        push edi
        push edx
        push dword ptr ds : [ebx+0x3C]
        call eax
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+0x3C], eax
        add esp, 0xC
        mov dword ptr ds : [esi+0x30], eax
        public_6d5abfc : nop
        mov ecx, edi
        mov edi, dword ptr ss : [ebp-8]
        mov eax, ecx
        shr ecx, 2
        mov esi, edx
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp-8], eax
        add dword ptr ss : [ebp+8], eax
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [ebx+0x2C]
        cmp dword ptr ss : [ebp+8], eax
        jne public_6d5ac95
        cmp dword ptr ds : [ebx+0x34], eax
        mov edx, dword ptr ds : [ebx+0x28]
        mov dword ptr ss : [ebp+8], edx
        jne public_6d5ac30
        mov dword ptr ds : [ebx+0x34], edx
        public_6d5ac30 : nop
        mov edi, dword ptr ds : [ebx+0x34]
        mov esi, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [esi+0x10]
        sub edi, edx
        cmp edi, eax
        mov dword ptr ss : [ebp-4], edi
        jbe public_6d5ac47
        mov dword ptr ss : [ebp-4], eax
        mov edi, eax
        public_6d5ac47 : nop
        test edi, edi
        je public_6d5ac55
        cmp dword ptr ss : [ebp+0x10], 0xFFFFFFFB
        jne public_6d5ac55
        and dword ptr ss : [ebp+0x10], 0
        public_6d5ac55 : nop
        add dword ptr ds : [esi+0x14], edi
        sub eax, edi
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6d5ac77
        push edi
        push edx
        push dword ptr ds : [ebx+0x3C]
        call eax
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+0x3C], eax
        add esp, 0xC
        mov dword ptr ds : [esi+0x30], eax
        public_6d5ac77 : nop
        mov ecx, edi
        mov edi, dword ptr ss : [ebp-8]
        mov eax, ecx
        shr ecx, 2
        mov esi, edx
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp-8], eax
        and ecx, 3
        add dword ptr ss : [ebp+8], eax
        rep movsb
        public_6d5ac95 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax+0xC], ecx
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        mov dword ptr ds : [ebx+0x30], eax
        mov eax, dword ptr ss : [ebp+0x10]
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d5ab97)
    }
}

#undef public_6d5abbb
#undef public_6d5abcc
#undef public_6d5abda
#undef public_6d5abfc
#undef public_6d5ac30
#undef public_6d5ac47
#undef public_6d5ac55
#undef public_6d5ac77
#undef public_6d5ac95
