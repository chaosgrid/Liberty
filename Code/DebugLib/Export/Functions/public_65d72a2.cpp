#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7280);
CLANG_FORWARD_PROC_SYMBOL(public_65d72a2);
CLANG_FORWARD_PROC_SYMBOL(public_65d7336);

#define public_65d72bf _public_65d72bf
#define public_65d72fa _public_65d72fa
#define public_65d72fc _public_65d72fc

PROC_DECLARE(0x65d72a2, internal_65d72a2, public_65d72a2);
extern "C" NAKED register_t __cdecl internal_65d72a2()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push 0xFFFFFFFE
/*FIXUP push offset _public_65d7280 @0x65d72ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65d7280
        push dword ptr fs : [0]
        mov dword ptr fs : [0], esp
        public_65d72bf : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [eax+0xC]
        cmp esi, 0xFFFFFFFF
        je public_65d72fc
        cmp esi, dword ptr ss : [esp+0x24]
        je public_65d72fc
        lea esi, ds:[esi+esi*2]
        mov ecx, dword ptr ds : [ebx+esi*4]
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        cmp dword ptr ds : [ebx+esi*4+4], 0
        jne public_65d72fa
        push 0x101
        mov eax, dword ptr ds : [ebx+esi*4+8]
        call public_65d7336
        call dword ptr ds : [ebx+esi*4+8]
        public_65d72fa : nop
        jmp public_65d72bf
        public_65d72fc : nop
        pop dword ptr fs : [0]
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65d72a2)
    }
}

#undef public_65d72bf
#undef public_65d72fa
#undef public_65d72fc
