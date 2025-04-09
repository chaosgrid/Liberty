#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_444e50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9873);

#define public_444e90 _public_444e90
#define public_444e9b _public_444e9b
#define public_444ea2 _public_444ea2
#define public_444ecc _public_444ecc

PROC_DECLARE(0x444e50, internal_444e50, public_444e50);
extern "C" NAKED register_t __cdecl internal_444e50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9873 @0x444e52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9873
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x1C], 1
        call public_4144f0
        mov ebp, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [esi+0x10]
        xor ebx, ebx
        cmp edi, ebp
        mov byte ptr ss : [esp+0x1C], bl
        je public_444ea2
        lea ecx, ds:[ecx]
        public_444e90 : nop
        mov ecx, dword ptr ds : [edi]
        cmp ecx, ebx
        je public_444e9b
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_444e9b : nop
        add edi, 8
        cmp edi, ebp
        jne public_444e90
        public_444ea2 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        push ecx
        call public_5b7e1d
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov eax, dword ptr ds : [esi]
        add esp, 4
        cmp eax, ebx
        je public_444ecc
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        public_444ecc : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x444e50)
    }
}

#undef public_444e90
#undef public_444e9b
#undef public_444ea2
#undef public_444ecc
