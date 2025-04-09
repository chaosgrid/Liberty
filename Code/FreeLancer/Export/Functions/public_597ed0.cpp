#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_597ed0);
CLANG_FORWARD_PROC_SYMBOL(public_599a60);
CLANG_FORWARD_PROC_SYMBOL(public_59dc00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4b42);

#define public_597f10 _public_597f10
#define public_597f1f _public_597f1f
#define public_597fc7 _public_597fc7
#define public_597fd5 _public_597fd5

PROC_DECLARE(0x597ed0, internal_597ed0, public_597ed0);
extern "C" NAKED register_t __cdecl internal_597ed0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4b42 @0x597ed2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4b42
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_5e5744
        mov ebx, dword ptr ds : [esi+0xBC]
        mov edi, dword ptr ds : [esi+0xB8]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], 3
        je public_597f1f
        lea ecx, ds:[ecx]
        public_597f10 : nop
        lea ecx, ds:[edi+4]
        call public_599a60
        add edi, 8
        cmp edi, ebx
        jne public_597f10
        public_597f1f : nop
        mov eax, dword ptr ds : [esi+0xB8]
        push eax
        call public_5b7e1d
        xor edi, edi
        mov dword ptr ds : [esi+0xB8], edi
        mov dword ptr ds : [esi+0xBC], edi
        mov dword ptr ds : [esi+0xC0], edi
        mov eax, dword ptr ds : [esi+0xA8]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0xA8], edi
        mov dword ptr ds : [esi+0xAC], edi
        mov dword ptr ds : [esi+0xB0], edi
        mov eax, dword ptr ds : [esi+0x98]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x98], edi
        mov dword ptr ds : [esi+0x9C], edi
        mov dword ptr ds : [esi+0xA0], edi
        mov eax, dword ptr ds : [esi+0x88]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x88], edi
        mov dword ptr ds : [esi+0x8C], edi
        mov dword ptr ds : [esi+0x90], edi
        mov dword ptr ds : [esi], offset public_5d5544
        mov edx, dword ptr ds : [public_67dcd4]
        add esp, 0x10
        dec edx
        mov dword ptr ds : [public_67dcd4], edx
        mov cl, byte ptr ds : [esi+0x6C]
        mov ebx, dword ptr ds : [esi+0xC]
        and cl, 0xFC
        cmp ebx, edi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x6C], cl
        je public_597fd5
        public_597fc7 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x28]
        mov ebx, dword ptr ds : [ebx+8]
        cmp ebx, edi
        jne public_597fc7
        public_597fd5 : nop
        push esi
        call public_59dc00
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x597ed0)
    }
}

#undef public_597f10
#undef public_597f1f
#undef public_597fc7
#undef public_597fd5
