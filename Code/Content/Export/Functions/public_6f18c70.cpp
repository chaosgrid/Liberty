#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f18c70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fada5e);

#define public_6f18cb0 _public_6f18cb0
#define public_6f18cdd _public_6f18cdd

PROC_DECLARE(0x6f18c70, internal_6f18c70, public_6f18c70);
extern "C" NAKED register_t __cdecl internal_6f18c70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fada5e @0x6f18c72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fada5e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        lea ecx, ds:[edi+0x4AC]
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [public_6fb3034]
        mov ebx, dword ptr ds : [edi+0x470]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6f18cdd
        nop 
        public_6f18cb0 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+0x474]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x474], ecx
        jne public_6f18cb0
        public_6f18cdd : nop
        mov eax, dword ptr ds : [edi+0x470]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [edi+0x470], 0
        mov dword ptr ds : [edi+0x474], 0
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f18c70)
    }
}

#undef public_6f18cb0
#undef public_6f18cdd
