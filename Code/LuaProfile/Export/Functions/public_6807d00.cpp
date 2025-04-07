#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806960);
CLANG_FORWARD_PROC_SYMBOL(public_6807d00);

#define public_6807d16 _public_6807d16
#define public_6807d4e _public_6807d4e

PROC_DECLARE(0x6807d00, internal_6807d00, public_6807d00);
extern "C" NAKED register_t __cdecl internal_6807d00()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x50]
        test eax, eax
        push edi
        jle public_6807d4e
        mov ebx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x10]
        public_6807d16 : nop
        mov eax, dword ptr ds : [esi+0x50]
        mov eax, dword ptr ds : [esi+eax*4-4]
        cmp dword ptr ds : [eax*4+public_680daac], ebx
        jl public_6807d4e
        mov edx, dword ptr ds : [eax*4+public_680dae4]
        xor ecx, ecx
        cmp eax, 2
        setl cl
        dec ecx
        push ecx
        push edx
        push edi
        call public_6806960
        mov ecx, dword ptr ds : [esi+0x50]
        add esp, 0xC
        dec ecx
        mov eax, ecx
        test eax, eax
        mov dword ptr ds : [esi+0x50], ecx
        jg public_6807d16
        public_6807d4e : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6807d00)
    }
}

#undef public_6807d16
#undef public_6807d4e
