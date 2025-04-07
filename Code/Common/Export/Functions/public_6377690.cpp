#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6377690);
CLANG_FORWARD_PROC_SYMBOL(public_637ce40);
CLANG_FORWARD_PROC_SYMBOL(public_6384670);

PROC_DECLARE(0x6377690, internal_6377690, public_6377690);
extern "C" NAKED register_t __cdecl internal_6377690()
{
    __asm
    {
        push ebx
        push esi
        push edi
        xor eax, eax
        or ebx, 0xFFFFFFFF
        mov ecx, 0x254
        mov edi, offset public_658b010
        rep stosd
        mov edi, offset public_63f2cac
        mov ecx, ebx
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        mov edi, offset public_658b718
        mov ecx, ebx
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        call public_637ce40
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, 1
        mov dword ptr ds : [public_658b7fc], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_658b014], eax
        mov dword ptr ds : [public_658b058], ebx
        mov dword ptr ds : [public_658b7f4], edx
        mov dword ptr ds : [public_658b7f8], ecx
        mov dword ptr ds : [public_658b870], ebx
        mov dword ptr ds : [public_658b878], 0xFFFFFFFF
        mov dword ptr ds : [public_658b87c], 0x7FEFFFFF
        mov dword ptr ds : [public_658b090], 0xFFFFFFFF
        mov dword ptr ds : [public_658b094], 0x7FEFFFFF
        mov dword ptr ds : [public_658b928], 0xFFFFFFFF
        mov dword ptr ds : [public_658b92c], 0x7FEFFFFF
        mov dword ptr ds : [public_658b930], 0xFFFFFFFF
        mov dword ptr ds : [public_658b934], 0x7FEFFFFF
        mov dword ptr ds : [public_658b938], 0xFFFFFFFF
        mov dword ptr ds : [public_658b93c], 0x7FEFFFFF
        mov dword ptr ds : [public_658b888], 0
        mov dword ptr ds : [public_658b88c], 0
        mov dword ptr ds : [public_658b890], 0
        mov dword ptr ds : [public_658b894], 0
        mov dword ptr ds : [public_658b6a8], 0
        mov dword ptr ds : [public_658b6ac], 0
        mov dword ptr ds : [public_658b6b8], 0
        mov dword ptr ds : [public_658b6bc], 0
        mov dword ptr ds : [public_658b6c0], 0xFFFFFFFF
        mov dword ptr ds : [public_658b6c4], 0xFFEFFFFF
        mov dword ptr ds : [public_658b0a4], eax
        mov dword ptr ds : [public_658b6c8], 0
        mov dword ptr ds : [public_658b6cc], 0
        mov dword ptr ds : [public_658b020], 0
        mov dword ptr ds : [public_658b024], 0
        mov dword ptr ds : [public_658b0c8], 0xFFFFFFFF
        mov dword ptr ds : [public_658b0cc], 0x7FEFFFFF
        mov dword ptr ds : [public_658b098], 0xFFFFFFFF
        mov dword ptr ds : [public_658b09c], 0x7FEFFFFF
        mov dword ptr ds : [public_658b708], 0xFFFFFFFF
        mov dword ptr ds : [public_658b70c], 0x7FEFFFFF
        mov dword ptr ds : [public_658b0b0], 0
        mov dword ptr ds : [public_658b0b4], 0
        mov dword ptr ds : [public_658b040], 0xFFFFFFFF
        mov dword ptr ds : [public_658b044], 0x7FEFFFFF
        mov dword ptr ds : [public_658b114], eax
        mov dword ptr ds : [public_658b8b8], 0
        mov dword ptr ds : [public_658b8bc], 0
        mov dword ptr ds : [public_658b048], 0xFFFFFFFF
        mov dword ptr ds : [public_658b04c], 0x7FEFFFFF
        mov dword ptr ds : [public_658b0b8], 0
        mov dword ptr ds : [public_658b0bc], 0
        mov dword ptr ds : [public_658b1d8], 0x80000000
        mov dword ptr ds : [public_658b0c0], eax
        mov dword ptr ds : [public_658b8d0], 0
        push eax
        mov dword ptr ds : [public_658b8d4], 0
        mov dword ptr ds : [public_658b8d8], 0
        mov dword ptr ds : [public_658b8dc], 0
        mov dword ptr ds : [public_658b210], 0xFFFFFFFF
        mov dword ptr ds : [public_658b214], 0x7FEFFFFF
        mov dword ptr ds : [public_658b208], ebx
        mov dword ptr ds : [public_658b828], ebx
        mov dword ptr ds : [public_658b830], ebx
        call public_6384670
        add esp, 4
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6377690)
    }
}
