#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63589);

#define public_6d4eee5 _public_6d4eee5
#define public_6d4ef22 _public_6d4ef22
#define public_6d4ef4d _public_6d4ef4d
#define public_6d4ef54 _public_6d4ef54
#define public_6d4ef9b _public_6d4ef9b

PROC_DECLARE(0x6d4eeb0, internal_6d4eeb0, public_6d4eeb0);
extern "C" NAKED register_t __cdecl internal_6d4eeb0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d63589 @0x6d4eeb8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63589
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push edi
        mov edi, ecx
        call dword ptr ds : [public_6d647e8]
        test al, al
        je public_6d4eee5
        mov dl, byte ptr ds : [edi+0x64]
        test dl, dl
        setne al
        test al, al
        je public_6d4ef9b
        public_6d4eee5 : nop
        mov eax, dword ptr ds : [edi+0x27C]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push esi
        lea ebp, ds:[edi+0x278]
        push eax
        push ecx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_6d64884]
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [public_6d648e8]
        mov eax, dword ptr ds : [edi+0x27C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x30], eax
        je public_6d4ef54
        push ebx
        public_6d4ef22 : nop
        mov cx, word ptr ds : [esi+0xA]
        mov edx, dword ptr ds : [public_6d6402c]
        cmp cx, word ptr ds : [edx]
        jne public_6d4ef4d
        lea ecx, ds:[edi+0x3C8]
        lea ebx, ds:[esi+8]
        call dword ptr ds : [public_6d645bc]
        mov ecx, ebx
        push eax
        call dword ptr ds : [public_6d64710]
        mov eax, dword ptr ss : [esp+0x34]
        public_6d4ef4d : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6d4ef22
        pop ebx
        public_6d4ef54 : nop
        push ebp
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d643b0]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ds : [edi+0x348]
        add edi, 0x348
        push edx
        mov dword ptr ss : [esp+0x30], 0
        call dword ptr ds : [eax+0x60]
        push edi
        push 0
        call public_6d43650
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call public_6d5ffb0
        add esp, 0xC
        pop esi
        pop ebp
        public_6d4ef9b : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x6d4eeb0)
    }
}

#undef public_6d4eee5
#undef public_6d4ef22
#undef public_6d4ef4d
#undef public_6d4ef54
#undef public_6d4ef9b
