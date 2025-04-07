#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bb070);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63948a2);

#define public_62bb0d0 _public_62bb0d0
#define public_62bb0e5 _public_62bb0e5
#define public_62bb12a _public_62bb12a
#define public_62bb141 _public_62bb141

PROC_DECLARE(0x62bb070, internal_62bb070, public_62bb070);
extern "C" NAKED register_t __cdecl internal_62bb070()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63948a2 @0x62bb072*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63948a2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        xor edi, edi
        cmp ebx, edi
        mov dword ptr ss : [esp+0x24], edi
        je public_62bb141
        mov esi, dword ptr ss : [esp+0x30]
        mov al, byte ptr ds : [esi]
        push 0x18
        mov byte ptr ds : [ebx], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], edi
        mov ecx, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x30], ecx
        je public_62bb141
        mov edi, edi
        public_62bb0d0 : nop
        mov esi, dword ptr ds : [edi+4]
        push 0x18
        call public_6391d9c
        add esp, 4
        test esi, esi
        mov dword ptr ds : [eax], edi
        jne public_62bb0e5
        mov esi, eax
        public_62bb0e5 : nop
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+8]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x18], esi
        test esi, esi
        mov byte ptr ss : [esp+0x24], 1
        je public_62bb12a
        mov cl, byte ptr ss : [ebp+8]
        mov byte ptr ds : [esi], cl
        push 0
        mov ecx, esi
        call dword ptr ds : [public_63991b8]
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        lea eax, ss:[ebp+8]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_63991a8]
        public_62bb12a : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x30]
        inc ecx
        mov dword ptr ds : [ebx+8], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        mov byte ptr ss : [esp+0x24], 0
        jne public_62bb0d0
        public_62bb141 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x62bb070)
    }
}

#undef public_62bb0d0
#undef public_62bb0e5
#undef public_62bb12a
#undef public_62bb141
