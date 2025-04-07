#include "Alchemy-PCH.h"


#define public_62310d3 _public_62310d3
#define public_62310d5 _public_62310d5
#define public_62310f9 _public_62310f9
#define public_62310fd _public_62310fd
#define public_6231102 _public_6231102
#define public_6231112 _public_6231112
#define public_6231128 _public_6231128
#define public_6231154 _public_6231154

PROC_DECLARE(0x62310c0, internal_62310c0, public_62310c0);
extern "C" NAKED register_t __cdecl internal_62310c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624e4b0]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6231112
        mov ebp, dword ptr ss : [esp+0x18]
        public_62310d3 : nop
        mov esi, ebp
        public_62310d5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_62310fd
        test cl, cl
        je public_62310f9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_62310fd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_62310d5
        public_62310f9 : nop
        xor eax, eax
        jmp public_6231102
        public_62310fd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6231102 : nop
        test eax, eax
        je public_6231128
        mov eax, dword ptr ds : [edi*8+public_624e4b8]
        inc edi
        test eax, eax
        jne public_62310d3
        public_6231112 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6231128 : nop
        mov eax, dword ptr ds : [edi*8+public_624e4b4]
        test eax, eax
        jns public_6231154
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
        public_6231154 : nop
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
        UNREACHABLE_TRAP(0x62310c0)
    }
}

#undef public_62310d3
#undef public_62310d5
#undef public_62310f9
#undef public_62310fd
#undef public_6231102
#undef public_6231112
#undef public_6231128
#undef public_6231154
