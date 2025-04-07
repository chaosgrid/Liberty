#include "Alchemy-PCH.h"


#define public_620ae53 _public_620ae53
#define public_620ae55 _public_620ae55
#define public_620ae79 _public_620ae79
#define public_620ae7d _public_620ae7d
#define public_620ae82 _public_620ae82
#define public_620ae92 _public_620ae92
#define public_620aea8 _public_620aea8
#define public_620aed4 _public_620aed4

PROC_DECLARE(0x620ae40, internal_620ae40, public_620ae40);
extern "C" NAKED register_t __cdecl internal_620ae40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624bd68]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_620ae92
        mov ebp, dword ptr ss : [esp+0x18]
        public_620ae53 : nop
        mov esi, ebp
        public_620ae55 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_620ae7d
        test cl, cl
        je public_620ae79
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_620ae7d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_620ae55
        public_620ae79 : nop
        xor eax, eax
        jmp public_620ae82
        public_620ae7d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_620ae82 : nop
        test eax, eax
        je public_620aea8
        mov eax, dword ptr ds : [edi*8+public_624bd70]
        inc edi
        test eax, eax
        jne public_620ae53
        public_620ae92 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_620aea8 : nop
        mov eax, dword ptr ds : [edi*8+public_624bd6c]
        test eax, eax
        jns public_620aed4
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
        public_620aed4 : nop
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
        UNREACHABLE_TRAP(0x620ae40)
    }
}

#undef public_620ae53
#undef public_620ae55
#undef public_620ae79
#undef public_620ae7d
#undef public_620ae82
#undef public_620ae92
#undef public_620aea8
#undef public_620aed4
