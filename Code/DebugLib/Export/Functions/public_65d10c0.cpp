#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d10c0);
CLANG_FORWARD_PROC_SYMBOL(public_65d13e0);
CLANG_FORWARD_PROC_SYMBOL(public_65d25f0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_JUMP_SYMBOL(public_65dfe71);

#define public_65d1116 _public_65d1116
#define public_65d1127 _public_65d1127
#define public_65d113c _public_65d113c
#define public_65d115a _public_65d115a
#define public_65d1181 _public_65d1181

PROC_DECLARE(0x65d10c0, internal_65d10c0, public_65d10c0);
extern "C" NAKED register_t __cdecl internal_65d10c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65dfe71 @0x65d10c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65dfe71
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_65e118c
        mov dword ptr ds : [esi+4], offset public_65e1170
        push esi
        mov dword ptr ss : [esp+0x24], 2
        call public_65d13e0
        mov eax, dword ptr ds : [esi+0x2C]
        mov byte ptr ss : [esp+0x20], 1
        test eax, eax
        je public_65d1116
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x2C], 0
        public_65d1116 : nop
        mov ebx, dword ptr ds : [esi+0x24]
        lea ebp, ds:[esi+0x20]
        mov byte ptr ss : [esp+0x20], 0
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_65d113c
        public_65d1127 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        lea edx, ss:[esp+0x14]
        push eax
        push edx
        mov ecx, ebp
        call public_65d25f0
        cmp edi, ebx
        jne public_65d1127
        public_65d113c : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_65d6cb8
        xor ebx, ebx
        add esp, 4
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        mov ebp, dword ptr ds : [esi+0x10]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_65d1181
        public_65d115a : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        call public_65d6cb8
        mov ecx, dword ptr ds : [esi+0x14]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [esi+0x14], ecx
        jne public_65d115a
        public_65d1181 : nop
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call public_65d6cb8
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x65d10c0)
    }
}

#undef public_65d1116
#undef public_65d1127
#undef public_65d113c
#undef public_65d115a
#undef public_65d1181
