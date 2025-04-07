#include "Alchemy-PCH.h"


#define public_6223a43 _public_6223a43
#define public_6223a45 _public_6223a45
#define public_6223a69 _public_6223a69
#define public_6223a6d _public_6223a6d
#define public_6223a72 _public_6223a72
#define public_6223a82 _public_6223a82
#define public_6223a98 _public_6223a98
#define public_6223ac4 _public_6223ac4

PROC_DECLARE(0x6223a30, internal_6223a30, public_6223a30);
extern "C" NAKED register_t __cdecl internal_6223a30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624dcc0]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6223a82
        mov ebp, dword ptr ss : [esp+0x18]
        public_6223a43 : nop
        mov esi, ebp
        public_6223a45 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6223a6d
        test cl, cl
        je public_6223a69
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6223a6d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6223a45
        public_6223a69 : nop
        xor eax, eax
        jmp public_6223a72
        public_6223a6d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6223a72 : nop
        test eax, eax
        je public_6223a98
        mov eax, dword ptr ds : [edi*8+public_624dcc8]
        inc edi
        test eax, eax
        jne public_6223a43
        public_6223a82 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6223a98 : nop
        mov eax, dword ptr ds : [edi*8+public_624dcc4]
        test eax, eax
        jns public_6223ac4
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
        public_6223ac4 : nop
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
        UNREACHABLE_TRAP(0x6223a30)
    }
}

#undef public_6223a43
#undef public_6223a45
#undef public_6223a69
#undef public_6223a6d
#undef public_6223a72
#undef public_6223a82
#undef public_6223a98
#undef public_6223ac4
