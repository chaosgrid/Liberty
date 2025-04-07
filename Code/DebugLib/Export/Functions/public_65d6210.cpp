#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6990);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);
CLANG_FORWARD_JUMP_SYMBOL(public_65e00e0);

#define public_65d6290 _public_65d6290
#define public_65d629e _public_65d629e
#define public_65d62a2 _public_65d62a2
#define public_65d62ba _public_65d62ba
#define public_65d6307 _public_65d6307
#define public_65d6321 _public_65d6321

PROC_DECLARE(0x65d6210, internal_65d6210, public_65d6210);
extern "C" NAKED register_t __cdecl internal_65d6210()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65e00e0 @0x65d6212*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65e00e0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x1C], ebp
        mov esi, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x10], 8
        mov dword ptr ss : [esp+0x14], offset public_65e32bc
        mov ebx, dword ptr ds : [esi+0x20]
        call dword ptr ds : [public_65e1004]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_65d62a2
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x3C]
        cmp eax, edi
        je public_65d629e
        cmp eax, ebp
        je public_65d6290
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_65d6290 : nop
        cmp edi, ebp
        mov dword ptr ss : [esp+0x1C], edi
        je public_65d629e
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_65d629e : nop
        mov dword ptr ss : [esp+0x20], ebx
        public_65d62a2 : nop
        mov edi, dword ptr ds : [esi+0x18]
        push 0x14
        mov ebx, dword ptr ds : [edi+4]
        call public_65d6f71
        add esp, 4
        cmp ebx, ebp
        mov dword ptr ds : [eax], edi
        jne public_65d62ba
        mov ebx, eax
        public_65d62ba : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x18]
        add eax, 8
        push ecx
        push eax
        call public_65d6990
        mov edi, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ss : [esp+0x48]
        add esp, 8
        inc edi
        mov dword ptr ds : [esi+0x1C], edi
        mov edx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [esi+0x20]
        inc edx
        mov dword ptr ds : [esi+0x20], edx
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x2C], 1
        cmp eax, ebp
        je public_65d6307
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x1C], ebp
        public_65d6307 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        cmp eax, ebp
        pop esi
        pop ebp
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        pop ebx
        je public_65d6321
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_65d6321 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        xor eax, eax
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 0x10
        UNREACHABLE_TRAP(0x65d6210)
    }
}

#undef public_65d6290
#undef public_65d629e
#undef public_65d62a2
#undef public_65d62ba
#undef public_65d6307
#undef public_65d6321
