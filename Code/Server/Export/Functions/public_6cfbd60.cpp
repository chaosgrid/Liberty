#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfbd60);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f620);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60c9b);

#define public_6cfbd97 _public_6cfbd97
#define public_6cfbdac _public_6cfbdac
#define public_6cfbdd0 _public_6cfbdd0
#define public_6cfbdf7 _public_6cfbdf7

PROC_DECLARE(0x6cfbd60, internal_6cfbd60, public_6cfbd60);
extern "C" NAKED register_t __cdecl internal_6cfbd60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60c9b @0x6cfbd62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60c9b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov ebp, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea ebx, ds:[edi+0x10]
        mov dword ptr ss : [esp+0x20], 0
        je public_6cfbdac
        public_6cfbd97 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_6d0f620
        cmp esi, ebp
        jne public_6cfbd97
        public_6cfbdac : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6d5ffb0
        xor ebp, ebp
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], ebp
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [ebx]
        add esp, 4
        cmp esi, ebx
        je public_6cfbdf7
        lea esp, ss:[esp]
        public_6cfbdd0 : nop
        mov eax, esi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6d5ffb0
        mov ecx, dword ptr ds : [edi+0xC]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0xC], ecx
        jne public_6cfbdd0
        public_6cfbdf7 : nop
        mov edx, dword ptr ds : [edi+8]
        push edx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov dword ptr ds : [edi+8], ebp
        mov dword ptr ds : [edi+0xC], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6cfbd60)
    }
}

#undef public_6cfbd97
#undef public_6cfbdac
#undef public_6cfbdd0
#undef public_6cfbdf7
