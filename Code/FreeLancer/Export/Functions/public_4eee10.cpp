#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_4eee10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf063);

#define public_4eee50 _public_4eee50
#define public_4eee5b _public_4eee5b
#define public_4eee62 _public_4eee62
#define public_4eee8c _public_4eee8c

PROC_DECLARE(0x4eee10, internal_4eee10, public_4eee10);
extern "C" NAKED register_t __cdecl internal_4eee10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf063 @0x4eee12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf063
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        lea esi, ds:[ecx+4]
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 1
        call public_4144f0
        mov ebp, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [esi+0x10]
        xor ebx, ebx
        cmp edi, ebp
        mov byte ptr ss : [esp+0x1C], bl
        je public_4eee62
        public_4eee50 : nop
        mov ecx, dword ptr ds : [edi]
        cmp ecx, ebx
        je public_4eee5b
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_4eee5b : nop
        add edi, 8
        cmp edi, ebp
        jne public_4eee50
        public_4eee62 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        push ecx
        call public_5b7e1d
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov eax, dword ptr ds : [esi]
        add esp, 4
        cmp eax, ebx
        je public_4eee8c
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        public_4eee8c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4eee10)
    }
}

#undef public_4eee50
#undef public_4eee5b
#undef public_4eee62
#undef public_4eee8c
