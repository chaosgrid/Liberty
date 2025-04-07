#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);
CLANG_FORWARD_JUMP_SYMBOL(public_65dffb9);

#define public_65d3099 _public_65d3099
#define public_65d30c0 _public_65d30c0
#define public_65d30eb _public_65d30eb
#define public_65d3107 _public_65d3107

PROC_DECLARE(0x65d3070, internal_65d3070, public_65d3070);
extern "C" NAKED register_t __cdecl internal_65d3070()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65dffb9 @0x65d3072*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65dffb9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        test ebx, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_65d3099
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+4]
        public_65d3099 : nop
        push ebp
        push esi
        push edi
        mov ebp, dword ptr ss : [esp+0x24]
        push 0xC
        mov dword ptr ss : [esp+0x20], 0
        mov esi, dword ptr ss : [ebp+0x1C]
        mov edi, dword ptr ds : [esi+4]
        call public_65d6f71
        add esp, 4
        mov dword ptr ds : [eax], esi
        test edi, edi
        jne public_65d30c0
        mov edi, eax
        public_65d30c0 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x10], eax
        test eax, eax
        mov byte ptr ss : [esp+0x1C], 1
        je public_65d30eb
        test ebx, ebx
        mov dword ptr ds : [eax], ebx
        je public_65d30eb
        mov ecx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [ecx+4]
        public_65d30eb : nop
        mov ecx, dword ptr ss : [ebp+0x20]
        pop edi
        inc ecx
        pop esi
        mov dword ptr ss : [ebp+0x20], ecx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        test ebx, ebx
        pop ebp
        je public_65d3107
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+8]
        public_65d3107 : nop
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x65d3070)
    }
}

#undef public_65d3099
#undef public_65d30c0
#undef public_65d30eb
#undef public_65d3107
