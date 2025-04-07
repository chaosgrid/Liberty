#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ed670);

#define public_62ed6c5 _public_62ed6c5
#define public_62ed6e0 _public_62ed6e0
#define public_62ed6ea _public_62ed6ea
#define public_62ed6f4 _public_62ed6f4
#define public_62ed6fb _public_62ed6fb
#define public_62ed706 _public_62ed706
#define public_62ed711 _public_62ed711
#define public_62ed718 _public_62ed718

PROC_DECLARE(0x62ed670, internal_62ed670, public_62ed670);
extern "C" NAKED register_t __cdecl internal_62ed670()
{
    __asm
    {
        sub esp, 0x10
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx]
        mov esi, eax
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+8], ecx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], edx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x14], 0x41A00000
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        test eax, 0x40000
        je public_62ed6c5
        pop edi
        xor al, al
        pop esi
        add esp, 0x10
        ret 8
        public_62ed6c5 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        xor edx, edx
        mov esi, ecx
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], edx
        mov edx, 1
        test dl, al
        je public_62ed6e0
        mov dword ptr ds : [ecx], edx
        public_62ed6e0 : nop
        test al, 2
        je public_62ed6ea
        mov dword ptr ds : [ecx], 2
        public_62ed6ea : nop
        test al, 4
        je public_62ed6f4
        mov dword ptr ds : [ecx], 3
        public_62ed6f4 : nop
        test al, 8
        je public_62ed6fb
        mov dword ptr ds : [ecx+4], edx
        public_62ed6fb : nop
        test al, 0x10
        je public_62ed706
        mov dword ptr ds : [ecx+4], 2
        public_62ed706 : nop
        test al, 0x20
        je public_62ed711
        mov dword ptr ds : [ecx+4], 3
        public_62ed711 : nop
        test ah, ah
        jns public_62ed718
        mov dword ptr ds : [ecx+8], edx
        public_62ed718 : nop
        pop edi
        mov al, dl
        pop esi
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x62ed670)
    }
}

#undef public_62ed6c5
#undef public_62ed6e0
#undef public_62ed6ea
#undef public_62ed6f4
#undef public_62ed6fb
#undef public_62ed706
#undef public_62ed711
#undef public_62ed718
