#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6369b30);
CLANG_FORWARD_PROC_SYMBOL(public_6369ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);
CLANG_FORWARD_JUMP_SYMBOL(public_6398630);

#define public_6369d1f _public_6369d1f
#define public_6369d30 _public_6369d30
#define public_6369d33 _public_6369d33
#define public_6369d5e _public_6369d5e
#define public_6369d64 _public_6369d64

PROC_DECLARE(0x6369ce0, internal_6369ce0, public_6369ce0);
extern "C" NAKED register_t __cdecl internal_6369ce0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6398630 @0x6369ce2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398630
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        lea ebx, ds:[esi+0x14]
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_63a58e0
        mov dword ptr ds : [ebx], offset public_63a58d0
        xor edi, edi
        mov di, word ptr ds : [esi+0x3A]
        mov dword ptr ss : [esp+0x18], 3
        dec edi
        js public_6369d33
        public_6369d1f : nop
        mov eax, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ds : [eax+edi*4]
        test ecx, ecx
        je public_6369d30
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x10]
        public_6369d30 : nop
        dec edi
        jns public_6369d1f
        public_6369d33 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0x3C]
        lea ecx, ds:[esi+0x40]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x18], 2
        je public_6369d64
        test eax, eax
        je public_6369d5e
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+0x3C], 0
        public_6369d5e : nop
        mov word ptr ds : [esi+0x38], 0
/*FIXUP public_6369d64 : nop
        push offset _public_6369b30 @0x6369d64*/
  FIXUP public_6369d64 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6369b30
        push 2
        push 0x10
        lea edx, ds:[esi+0x18]
        push edx
        mov word ptr ds : [esi+0x3A], 0
        mov byte ptr ss : [esp+0x28], 1
        call public_6391dfc
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, esi
        neg eax
        sbb eax, eax
        and eax, ebx
        mov dword ptr ds : [eax], offset public_63a5750
        pop edi
        mov dword ptr ds : [esi], offset public_63a55b8
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6369ce0)
    }
}

#undef public_6369d1f
#undef public_6369d30
#undef public_6369d33
#undef public_6369d5e
#undef public_6369d64
