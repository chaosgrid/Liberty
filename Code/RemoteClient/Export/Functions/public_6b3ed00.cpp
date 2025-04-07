#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b386f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3ed00);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6a7ae);

#define public_6b3ed37 _public_6b3ed37
#define public_6b3ed47 _public_6b3ed47
#define public_6b3ed4e _public_6b3ed4e
#define public_6b3ed5e _public_6b3ed5e
#define public_6b3ed70 _public_6b3ed70
#define public_6b3ed85 _public_6b3ed85
#define public_6b3edab _public_6b3edab
#define public_6b3edbb _public_6b3edbb

PROC_DECLARE(0x6b3ed00, internal_6b3ed00, public_6b3ed00);
extern "C" NAKED register_t __cdecl internal_6b3ed00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6a7ae @0x6b3ed02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6a7ae
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        mov ebx, ecx
        push esi
        mov dword ptr ss : [esp+8], ebx
        mov dword ptr ds : [ebx], offset public_6b6c174
        mov eax, dword ptr ds : [ebx+0x4C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], 2
        je public_6b3ed4e
        public_6b3ed37 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6b3ed47
        push eax
        call public_6b6a092
        add esp, 4
        public_6b3ed47 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0x4C]
        jne public_6b3ed37
        public_6b3ed4e : nop
        mov eax, dword ptr ds : [ebx+0x64]
        test eax, eax
        je public_6b3ed5e
        push eax
        call public_6b6a092
        add esp, 4
        public_6b3ed5e : nop
        push ebp
        mov ebp, dword ptr ds : [ebx+0x4C]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        push edi
        lea edi, ds:[ebx+0x48]
        je public_6b3ed85
        lea ecx, ds:[ecx]
        public_6b3ed70 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6b386f0
        cmp esi, ebp
        jne public_6b3ed70
        public_6b3ed85 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6b6a092
        xor esi, esi
        add esp, 4
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov eax, dword ptr ds : [ebx+0x2C]
        cmp eax, esi
        pop edi
        pop ebp
        je public_6b3edab
        push eax
        call public_6b6a092
        add esp, 4
        public_6b3edab : nop
        mov eax, dword ptr ds : [ebx+0x24]
        cmp eax, esi
        je public_6b3edbb
        push eax
        call public_6b6a092
        add esp, 4
        public_6b3edbb : nop
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_6b4e730
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6b3ed00)
    }
}

#undef public_6b3ed37
#undef public_6b3ed47
#undef public_6b3ed4e
#undef public_6b3ed5e
#undef public_6b3ed70
#undef public_6b3ed85
#undef public_6b3edab
#undef public_6b3edbb
