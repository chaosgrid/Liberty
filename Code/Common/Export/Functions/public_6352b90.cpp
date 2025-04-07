#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352b30);
CLANG_FORWARD_PROC_SYMBOL(public_6352b90);
CLANG_FORWARD_JUMP_SYMBOL(public_639807b);

#define public_6352bdc _public_6352bdc
#define public_6352c03 _public_6352c03
#define public_6352c78 _public_6352c78
#define public_6352c9b _public_6352c9b
#define public_6352ca4 _public_6352ca4
#define public_6352cca _public_6352cca

PROC_DECLARE(0x6352b90, internal_6352b90, public_6352b90);
extern "C" NAKED register_t __cdecl internal_6352b90()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639807b @0x6352b98*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639807b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x81C
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x28]
        mov eax, dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [eax+0x110]
        cmp dword ptr ds : [edi+0x70], eax
        jne public_6352bdc
        pop edi
        mov eax, 4
        pop esi
        mov ecx, dword ptr ss : [esp+0x81C]
        mov dword ptr fs : [0], ecx
        add esp, 0x828
        ret 
        public_6352bdc : nop
        mov edx, edi
        mov dword ptr ds : [edi+0x70], eax
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+0x820], 0
        mov dword ptr ss : [esp+0x82C], 0
        mov dword ptr ss : [esp+0xC], 0
        public_6352c03 : nop
        mov eax, dword ptr ds : [edx+0x14]
        mov ecx, eax
        shr ecx, 8
        and ecx, 3
        xor eax, 0x100
        lea esi, ds:[ecx*8]
        sub esi, ecx
        movsx ecx, word ptr ds : [edx+esi*4+0x32]
        shr eax, 8
        and eax, 3
        lea esi, ds:[eax*8]
        sub esi, eax
        movsx eax, word ptr ds : [edx+esi*4+0x32]
        lea eax, ds:[eax+ecx*4]
        lea ecx, ss:[esp+8]
        push ecx
        call dword ptr ds : [eax*4+public_658ab4c]
        mov esi, eax
        add esp, 4
        cmp esi, 1
        je public_6352c78
        mov edx, dword ptr ds : [edi+0x14]
        and edx, 0xFFFF7FFF
        or edx, 0x4000
        sub eax, 2
        mov dword ptr ds : [edi+0x14], edx
        je public_6352ca4
        dec eax
        je public_6352c9b
        mov dword ptr ds : [0], 0
        mov edx, dword ptr ss : [esp+8]
        jmp public_6352c03
        public_6352c78 : nop
        and dword ptr ds : [edi+0x14], 0xFFFF3FFF
        pop edi
        mov eax, 1
        pop esi
        mov ecx, dword ptr ss : [esp+0x81C]
        mov dword ptr fs : [0], ecx
        add esp, 0x828
        ret 
        public_6352c9b : nop
        lea ecx, ss:[esp+8]
        call public_6352b30
        public_6352ca4 : nop
        mov eax, dword ptr ds : [edi+0x14]
        mov ecx, eax
        and ecx, 0x3000
        cmp ecx, 0x1000
        je public_6352cca
        and eax, 0x3C0000
        cmp eax, 0x100000
        je public_6352cca
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x14]
        public_6352cca : nop
        mov ecx, dword ptr ss : [esp+0x824]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x828
        ret 
        UNREACHABLE_TRAP(0x6352b90)
    }
}

#undef public_6352bdc
#undef public_6352c03
#undef public_6352c78
#undef public_6352c9b
#undef public_6352ca4
#undef public_6352cca
