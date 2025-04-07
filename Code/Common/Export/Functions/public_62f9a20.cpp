#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62f9a20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6395ab6);

#define public_62f9a57 _public_62f9a57
#define public_62f9a6c _public_62f9a6c
#define public_62f9a91 _public_62f9a91
#define public_62f9aa6 _public_62f9aa6
#define public_62f9ad0 _public_62f9ad0
#define public_62f9ae5 _public_62f9ae5

PROC_DECLARE(0x62f9a20, internal_62f9a20, public_62f9a20);
extern "C" NAKED register_t __cdecl internal_62f9a20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395ab6 @0x62f9a22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395ab6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov ebp, dword ptr ds : [ebx+0x5C]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ebx+0x58]
        mov dword ptr ss : [esp+0x20], 1
        je public_62f9a6c
        public_62f9a57 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6271cc0
        cmp esi, ebp
        jne public_62f9a57
        public_62f9a6c : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov ebp, dword ptr ds : [ebx+0x50]
        mov esi, dword ptr ss : [ebp]
        lea edi, ds:[ebx+0x4C]
        add esp, 4
        cmp esi, ebp
        mov byte ptr ss : [esp+0x20], al
        je public_62f9aa6
        public_62f9a91 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_6271cc0
        cmp esi, ebp
        jne public_62f9a91
        public_62f9aa6 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov edi, dword ptr ds : [ebx+0x44]
        mov esi, dword ptr ds : [edi]
        lea ebp, ds:[ebx+0x40]
        add esp, 4
        cmp esi, edi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_62f9ae5
        mov edi, edi
        public_62f9ad0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebp
        call public_6271cc0
        cmp esi, edi
        jne public_62f9ad0
        public_62f9ae5 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        pop edi
        xor eax, eax
        pop esi
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62f9a20)
    }
}

#undef public_62f9a57
#undef public_62f9a6c
#undef public_62f9a91
#undef public_62f9aa6
#undef public_62f9ad0
#undef public_62f9ae5
