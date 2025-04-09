#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_533e10);
CLANG_FORWARD_PROC_SYMBOL(public_5437d0);
CLANG_FORWARD_PROC_SYMBOL(public_544380);

#define public_5447f0 _public_5447f0
#define public_5447f2 _public_5447f2
#define public_544822 _public_544822
#define public_544824 _public_544824
#define public_54484c _public_54484c
#define public_54486e _public_54486e

PROC_DECLARE(0x5447b0, internal_5447b0, public_5447b0);
extern "C" NAKED register_t __cdecl internal_5447b0()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        call public_533e10
        mov dl, byte ptr ds : [esi+0x18C]
        and dl, 0xFC
        push 0
        mov ecx, esi
        mov byte ptr ds : [esi+0x18C], dl
        call public_5437d0
        lea edi, ds:[esi+0xC]
        test edi, edi
        je public_5447f0
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_5447f0
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_5447f2
        public_5447f0 : nop
        xor eax, eax
        public_5447f2 : nop
        mov edx, dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [edx+4]
        add eax, 0x64
        push eax
        mov ecx, esi
        call public_544380
        test edi, edi
        je public_544822
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        je public_544822
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_544824
        public_544822 : nop
        xor edi, edi
        public_544824 : nop
        mov edx, dword ptr ds : [edi+0xB4]
        cmp edx, dword ptr ds : [public_673344]
        jne public_54484c
        push 0
/*FIXUP push offset public_5dffdc @0x544834*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dffdc
        call dword ptr ds : [public_5c6ae0]
        add esp, 8
        push eax
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c6adc]
        public_54484c : nop
        mov ecx, edi
        call dword ptr ds : [public_5c6510]
        test al, al
        jne public_54486e
        mov ecx, edi
        call dword ptr ds : [public_5c6ad8]
        test al, al
        jne public_54486e
        push 1
        mov ecx, edi
        call dword ptr ds : [public_5c65c4]
        public_54486e : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5447b0)
    }
}

#undef public_5447f0
#undef public_5447f2
#undef public_544822
#undef public_544824
#undef public_54484c
#undef public_54486e
