#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d7a70);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5be386);

#define public_4d7ae3 _public_4d7ae3
#define public_4d7b37 _public_4d7b37

PROC_DECLARE(0x4d7a70, internal_4d7a70, public_4d7a70);
extern "C" NAKED register_t __cdecl internal_4d7a70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be386 @0x4d7a72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be386
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x38]
        lea ebp, ds:[esi+0x364]
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ds : [esi], offset public_5d8310
        mov dword ptr ds : [edi], offset public_5d8344
        mov dword ptr ds : [esi+0xB4], offset public_5d8304
        mov dword ptr ss : [ebp], offset public_5d82fc
        mov dword ptr ds : [esi+0x368], offset public_5d82f4
        xor ebx, ebx
        lea ecx, ds:[esi+0x390]
        mov dword ptr ds : [public_674a58], ebx
        cmp dword ptr ds : [ecx], ebx
        mov dword ptr ss : [esp+0x24], 3
        je public_4d7ae3
        push ebx
        call dword ptr ds : [public_5c62a8]
        public_4d7ae3 : nop
        mov eax, dword ptr ds : [esi+0x380]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, ebp
        mov dword ptr ds : [esi+0x380], ebx
        mov dword ptr ds : [esi+0x384], ebx
        mov dword ptr ds : [esi+0x388], ebx
        mov byte ptr ss : [esp+0x24], 1
        call public_576010
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], bl
        call public_59fa50
        lea ecx, ds:[esi+0x28]
        mov dword ptr ds : [esi], offset public_5d6eac
        cmp dword ptr ds : [ecx], ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        je public_4d7b37
        push ebx
        call dword ptr ds : [public_5c62a8]
        public_4d7b37 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x4d7a70)
    }
}

#undef public_4d7ae3
#undef public_4d7b37
