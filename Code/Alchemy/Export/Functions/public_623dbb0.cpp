#include "Alchemy-PCH.h"


#define public_623dbc3 _public_623dbc3
#define public_623dbc5 _public_623dbc5
#define public_623dbe9 _public_623dbe9
#define public_623dbed _public_623dbed
#define public_623dbf2 _public_623dbf2
#define public_623dc02 _public_623dc02
#define public_623dc18 _public_623dc18
#define public_623dc44 _public_623dc44

PROC_DECLARE(0x623dbb0, internal_623dbb0, public_623dbb0);
extern "C" NAKED register_t __cdecl internal_623dbb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624f770]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_623dc02
        mov ebp, dword ptr ss : [esp+0x18]
        public_623dbc3 : nop
        mov esi, ebp
        public_623dbc5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_623dbed
        test cl, cl
        je public_623dbe9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_623dbed
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_623dbc5
        public_623dbe9 : nop
        xor eax, eax
        jmp public_623dbf2
        public_623dbed : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_623dbf2 : nop
        test eax, eax
        je public_623dc18
        mov eax, dword ptr ds : [edi*8+public_624f778]
        inc edi
        test eax, eax
        jne public_623dbc3
        public_623dc02 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_623dc18 : nop
        mov eax, dword ptr ds : [edi*8+public_624f774]
        test eax, eax
        jns public_623dc44
        mov ecx, dword ptr ss : [esp+0x14]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+ecx]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        pop edi
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_623dc44 : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+edx]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        pop edi
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x623dbb0)
    }
}

#undef public_623dbc3
#undef public_623dbc5
#undef public_623dbe9
#undef public_623dbed
#undef public_623dbf2
#undef public_623dc02
#undef public_623dc18
#undef public_623dc44
