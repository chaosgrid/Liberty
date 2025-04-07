#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2f030);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae7c1);

#define public_6f2f090 _public_6f2f090
#define public_6f2f0a5 _public_6f2f0a5
#define public_6f2f0bc _public_6f2f0bc
#define public_6f2f0ce _public_6f2f0ce

PROC_DECLARE(0x6f2f030, internal_6f2f030, public_6f2f030);
extern "C" NAKED register_t __cdecl internal_6f2f030()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae7c1 @0x6f2f032*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae7c1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov dword ptr ss : [esp+0xC], ebp
        xor edi, edi
        cmp ebp, edi
        mov dword ptr ss : [esp+0x18], edi
        je public_6f2f0ce
        mov esi, dword ptr ss : [esp+0x24]
        mov al, byte ptr ds : [esi]
        push 0xC
        mov byte ptr ss : [ebp], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], edi
        mov ecx, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x24], ecx
        je public_6f2f0ce
        push ebx
        lea esp, ss:[esp]
        public_6f2f090 : nop
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_6f2f0a5
        mov ebx, eax
        public_6f2f0a5 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f2f0bc
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], edx
        public_6f2f0bc : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x28]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_6f2f090
        pop ebx
        public_6f2f0ce : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f2f030)
    }
}

#undef public_6f2f090
#undef public_6f2f0a5
#undef public_6f2f0bc
#undef public_6f2f0ce
