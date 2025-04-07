#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b3f820);
CLANG_FORWARD_PROC_SYMBOL(public_6b40310);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6a7ea);

#define public_6b3f861 _public_6b3f861
#define public_6b3f874 _public_6b3f874
#define public_6b3f887 _public_6b3f887
#define public_6b3f8b0 _public_6b3f8b0
#define public_6b3f8d5 _public_6b3f8d5
#define public_6b3f900 _public_6b3f900
#define public_6b3f916 _public_6b3f916
#define public_6b3f949 _public_6b3f949

PROC_DECLARE(0x6b3f820, internal_6b3f820, public_6b3f820);
extern "C" NAKED register_t __cdecl internal_6b3f820()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6a7ea @0x6b3f822*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6a7ea
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0xDC]
        push ebp
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ds : [ebx], offset public_6b6c1cc
        je public_6b3f861
        push eax
        call public_6b6a092
        add esp, 4
        mov dword ptr ds : [ebx+0xDC], ebp
        public_6b3f861 : nop
        mov eax, dword ptr ds : [ebx+0xD4]
        cmp eax, ebp
        je public_6b3f874
        push eax
        call public_6b6a092
        add esp, 4
        public_6b3f874 : nop
        mov eax, dword ptr ds : [ebx+0xCC]
        cmp eax, ebp
        je public_6b3f887
        push eax
        call public_6b6a092
        add esp, 4
        public_6b3f887 : nop
        push esi
        push edi
        mov dword ptr ds : [ebx], offset public_6b6c1bc
        mov edi, dword ptr ds : [ebx+0x84]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        lea esi, ds:[ebx+0x80]
        mov dword ptr ss : [esp+0x28], 3
        mov dword ptr ss : [esp+0x10], eax
        je public_6b3f8d5
        lea ecx, ds:[ecx]
        public_6b3f8b0 : nop
        push ebp
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6b40310
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6b6b00c]
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6b3f8b0
        public_6b3f8d5 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6b6a092
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov ebp, dword ptr ds : [ebx+0x78]
        mov esi, dword ptr ss : [ebp]
        lea edi, ds:[ebx+0x74]
        add esp, 4
        cmp esi, ebp
        mov byte ptr ss : [esp+0x28], 2
        je public_6b3f916
        lea esp, ss:[esp]
        public_6b3f900 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6b6b048]
        cmp esi, ebp
        jne public_6b3f900
        public_6b3f916 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6b6a092
        xor esi, esi
        add esp, 4
        lea ecx, ds:[ebx+0x70]
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov byte ptr ss : [esp+0x28], 1
        call public_6b3a450
        mov eax, dword ptr ds : [ebx+0x44]
        pop edi
        cmp eax, esi
        pop esi
        je public_6b3f949
        push eax
        call public_6b6a092
        add esp, 4
        public_6b3f949 : nop
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_6b4e730
        mov ecx, dword ptr ss : [esp+0x18]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6b3f820)
    }
}

#undef public_6b3f861
#undef public_6b3f874
#undef public_6b3f887
#undef public_6b3f8b0
#undef public_6b3f8d5
#undef public_6b3f900
#undef public_6b3f916
#undef public_6b3f949
