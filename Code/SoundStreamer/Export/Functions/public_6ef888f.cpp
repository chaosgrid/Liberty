#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef45cb);
CLANG_FORWARD_PROC_SYMBOL(public_6ef50fb);
CLANG_FORWARD_PROC_SYMBOL(public_6ef888f);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8928);
CLANG_FORWARD_PROC_SYMBOL(public_6efa523);

#define public_6ef88a6 _public_6ef88a6
#define public_6ef88cb _public_6ef88cb
#define public_6ef88fb _public_6ef88fb

PROC_DECLARE(0x6ef888f, internal_6ef888f, public_6ef888f);
extern "C" NAKED register_t __cdecl internal_6ef888f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        xor ebx, ebx
        cmp dword ptr ds : [public_6f02648], ebx
        push esi
        push edi
        jne public_6ef88a6
        call public_6efa523
        public_6ef88a6 : nop
        mov esi, offset public_6f0113c
        push 0x104
        push esi
        push ebx
        call dword ptr ds : [public_6efc00c]
        mov eax, dword ptr ds : [public_6f02678]
        mov dword ptr ds : [public_6f01128], esi
        mov edi, esi
        cmp byte ptr ds : [eax], bl
        je public_6ef88cb
        mov edi, eax
        public_6ef88cb : nop
        lea eax, ss:[ebp-8]
        push eax
        lea eax, ss:[ebp-4]
        push eax
        push ebx
        push ebx
        push edi
        call public_6ef8928
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp-4]
        lea eax, ds:[eax+ecx*4]
        push eax
        call public_6ef45cb
        mov esi, eax
        add esp, 0x18
        cmp esi, ebx
        jne public_6ef88fb
        push 8
        call public_6ef50fb
        pop ecx
        public_6ef88fb : nop
        lea eax, ss:[ebp-8]
        push eax
        lea eax, ss:[ebp-4]
        push eax
        mov eax, dword ptr ss : [ebp-4]
        lea eax, ds:[esi+eax*4]
        push eax
        push esi
        push edi
        call public_6ef8928
        mov eax, dword ptr ss : [ebp-4]
        add esp, 0x14
        dec eax
        mov dword ptr ds : [public_6f01110], esi
        pop edi
        pop esi
        mov dword ptr ds : [public_6f0110c], eax
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef888f)
    }
}

#undef public_6ef88a6
#undef public_6ef88cb
#undef public_6ef88fb
