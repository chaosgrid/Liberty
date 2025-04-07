#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1c1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62288);

#define public_6d1c1ef _public_6d1c1ef
#define public_6d1c1f1 _public_6d1c1f1
#define public_6d1c1f4 _public_6d1c1f4
#define public_6d1c200 _public_6d1c200
#define public_6d1c217 _public_6d1c217

PROC_DECLARE(0x6d1c1a0, internal_6d1c1a0, public_6d1c1a0);
extern "C" NAKED register_t __cdecl internal_6d1c1a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62288 @0x6d1c1a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62288
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        lea edi, ds:[esi+0x54]
        mov byte ptr ds : [edi], bl
        mov byte ptr ss : [esp+0xC], bl
        mov dword ptr ss : [esp+0x10], ebx
        lea eax, ss:[esp+0xC]
        cmp edi, eax
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6d1c1f4
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, ebx
        je public_6d1c1f1
        mov al, bl
        cmp al, bl
        je public_6d1c1ef
        cmp ecx, ebx
        je public_6d1c1ef
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6d1c1ef : nop
        mov byte ptr ds : [edi], bl
        public_6d1c1f1 : nop
        mov dword ptr ds : [edi+4], ebx
        public_6d1c1f4 : nop
        cmp dword ptr ds : [esi+4], ebx
        je public_6d1c217
        lea esp, ss:[esp]
        public_6d1c200 : nop
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax]
        mov ecx, eax
        push ecx
        call public_6d5ffb0
        add esp, 4
        cmp edi, ebx
        mov dword ptr ds : [esi+4], edi
        jne public_6d1c200
        public_6d1c217 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d1c1a0)
    }
}

#undef public_6d1c1ef
#undef public_6d1c1f1
#undef public_6d1c1f4
#undef public_6d1c200
#undef public_6d1c217
