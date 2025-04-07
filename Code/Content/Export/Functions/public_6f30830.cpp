#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef93c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f30830);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae97b);

#define public_6f30861 _public_6f30861
#define public_6f3086f _public_6f3086f
#define public_6f30890 _public_6f30890
#define public_6f308b7 _public_6f308b7

PROC_DECLARE(0x6f30830, internal_6f30830, public_6f30830);
extern "C" NAKED register_t __cdecl internal_6f30830()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae97b @0x6f30832*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae97b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        lea esi, ds:[ecx+0x18]
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov ebx, dword ptr ds : [esi+0x28]
        mov edi, dword ptr ds : [esi+0x24]
        xor ebp, ebp
        cmp edi, ebx
        mov dword ptr ss : [esp+0x1C], ebp
        je public_6f3086f
        public_6f30861 : nop
        mov ecx, edi
        call public_6ef93c0
        add edi, 0x50
        cmp edi, ebx
        jne public_6f30861
        public_6f3086f : nop
        mov eax, dword ptr ds : [esi+0x24]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x24], ebp
        mov dword ptr ds : [esi+0x28], ebp
        mov dword ptr ds : [esi+0x2C], ebp
        mov ebx, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [ebx]
        add esp, 4
        cmp edi, ebx
        je public_6f308b7
        lea ecx, ds:[ecx]
        public_6f30890 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [esi+0x18]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0x18], ecx
        jne public_6f30890
        public_6f308b7 : nop
        mov eax, dword ptr ds : [esi+0x14]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0x14], ebp
        mov dword ptr ds : [esi+0x18], ebp
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f30830)
    }
}

#undef public_6f30861
#undef public_6f3086f
#undef public_6f30890
#undef public_6f308b7
