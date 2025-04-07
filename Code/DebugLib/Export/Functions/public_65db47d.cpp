#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7ef0);
CLANG_FORWARD_PROC_SYMBOL(public_65d8535);
CLANG_FORWARD_PROC_SYMBOL(public_65db47d);
CLANG_FORWARD_PROC_SYMBOL(public_65db516);
CLANG_FORWARD_PROC_SYMBOL(public_65de299);

#define public_65db494 _public_65db494
#define public_65db4b9 _public_65db4b9
#define public_65db4e9 _public_65db4e9

PROC_DECLARE(0x65db47d, internal_65db47d, public_65db47d);
extern "C" NAKED register_t __cdecl internal_65db47d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        xor ebx, ebx
        cmp dword ptr ds : [public_65e7a48], ebx
        push esi
        push edi
        jne public_65db494
        call public_65de299
        public_65db494 : nop
        mov esi, offset public_65e625c
        push 0x104
        push esi
        push ebx
        call dword ptr ds : [public_65e100c]
        mov eax, dword ptr ds : [public_65e7a58]
        mov dword ptr ds : [public_65e6164], esi
        mov edi, esi
        cmp byte ptr ds : [eax], bl
        je public_65db4b9
        mov edi, eax
        public_65db4b9 : nop
        lea eax, ss:[ebp-8]
        push eax
        lea eax, ss:[ebp-4]
        push eax
        push ebx
        push ebx
        push edi
        call public_65db516
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp-4]
        lea eax, ds:[eax+ecx*4]
        push eax
        call public_65d8535
        mov esi, eax
        add esp, 0x18
        cmp esi, ebx
        jne public_65db4e9
        push 8
        call public_65d7ef0
        pop ecx
        public_65db4e9 : nop
        lea eax, ss:[ebp-8]
        push eax
        lea eax, ss:[ebp-4]
        push eax
        mov eax, dword ptr ss : [ebp-4]
        lea eax, ds:[esi+eax*4]
        push eax
        push esi
        push edi
        call public_65db516
        mov eax, dword ptr ss : [ebp-4]
        add esp, 0x14
        dec eax
        mov dword ptr ds : [public_65e614c], esi
        pop edi
        pop esi
        mov dword ptr ds : [public_65e6148], eax
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65db47d)
    }
}

#undef public_65db494
#undef public_65db4b9
#undef public_65db4e9
