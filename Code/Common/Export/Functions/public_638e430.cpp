#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636f780);
CLANG_FORWARD_PROC_SYMBOL(public_638e430);

#define public_638e459 _public_638e459
#define public_638e46e _public_638e46e
#define public_638e472 _public_638e472

PROC_DECLARE(0x638e430, internal_638e430, public_638e430);
extern "C" NAKED register_t __cdecl internal_638e430()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_658b24c]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push eax
        push 0
        dec ecx
        push ecx
        push edx
        push edi
        call public_636f780
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 0x14
        public_638e459 : nop
        mov ecx, dword ptr ds : [edx+eax*4+4]
        test ecx, ecx
        je public_638e46e
        cmp ecx, esi
        je public_638e472
        inc eax
        cmp eax, edi
        jne public_638e459
        xor eax, eax
        jmp public_638e459
        public_638e46e : nop
        mov dword ptr ds : [edx+eax*4+4], esi
        public_638e472 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x638e430)
    }
}

#undef public_638e459
#undef public_638e46e
#undef public_638e472
