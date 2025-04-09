#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_459950);
CLANG_FORWARD_PROC_SYMBOL(public_48c8a0);
CLANG_FORWARD_PROC_SYMBOL(public_48cce0);
CLANG_FORWARD_PROC_SYMBOL(public_48d4a0);
CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);

#define public_48d4d1 _public_48d4d1
#define public_48d53a _public_48d53a

PROC_DECLARE(0x48d4a0, internal_48d4a0, public_48d4a0);
extern "C" NAKED register_t __cdecl internal_48d4a0()
{
    __asm
    {
        push ebx
        push esi
        push edi
/*FIXUP push offset public_5cb6a0 @0x48d4a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6a0
        call public_59d9c0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_48d53a
        mov ebx, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [ebx+8]
        mov al, 1
        cmp cl, al
        jne public_48d4d1
        pop edi
        mov byte ptr ds : [esi+0x344], al
        pop esi
        pop ebx
        ret 
        public_48d4d1 : nop
        lea edi, ds:[esi+0x37C]
        mov ecx, edi
        mov dword ptr ds : [esi+0x378], 0xFFFFFFFF
        call dword ptr ds : [public_5c6288]
        add ebx, 0xC
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c628c]
        mov ecx, esi
        call public_48c8a0
        mov ecx, esi
        call public_48cce0
        mov eax, dword ptr ds : [esi+0x378]
        cmp eax, 0xFFFFFFFF
        je public_48d53a
        mov edx, dword ptr ds : [esi+0x394]
        lea edi, ds:[eax+eax*2]
        shl edi, 5
        add edi, edx
        lea eax, ds:[edi+0x14]
        push eax
        call public_459950
        lea ecx, ds:[edi+0x2C]
        push ecx
        call public_459950
        add edi, 0x44
        push edi
        call public_459950
        add esp, 0xC
        public_48d53a : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x48d4a0)
    }
}

#undef public_48d4d1
#undef public_48d53a
