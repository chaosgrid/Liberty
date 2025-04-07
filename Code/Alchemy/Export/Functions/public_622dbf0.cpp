#include "Alchemy-PCH.h"


#define public_622dc03 _public_622dc03
#define public_622dc05 _public_622dc05
#define public_622dc29 _public_622dc29
#define public_622dc2d _public_622dc2d
#define public_622dc32 _public_622dc32
#define public_622dc42 _public_622dc42
#define public_622dc58 _public_622dc58
#define public_622dc84 _public_622dc84

PROC_DECLARE(0x622dbf0, internal_622dbf0, public_622dbf0);
extern "C" NAKED register_t __cdecl internal_622dbf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624e134]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_622dc42
        mov ebp, dword ptr ss : [esp+0x18]
        public_622dc03 : nop
        mov esi, ebp
        public_622dc05 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_622dc2d
        test cl, cl
        je public_622dc29
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_622dc2d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_622dc05
        public_622dc29 : nop
        xor eax, eax
        jmp public_622dc32
        public_622dc2d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_622dc32 : nop
        test eax, eax
        je public_622dc58
        mov eax, dword ptr ds : [edi*8+public_624e13c]
        inc edi
        test eax, eax
        jne public_622dc03
        public_622dc42 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_622dc58 : nop
        mov eax, dword ptr ds : [edi*8+public_624e138]
        test eax, eax
        jns public_622dc84
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
        public_622dc84 : nop
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
        UNREACHABLE_TRAP(0x622dbf0)
    }
}

#undef public_622dc03
#undef public_622dc05
#undef public_622dc29
#undef public_622dc2d
#undef public_622dc32
#undef public_622dc42
#undef public_622dc58
#undef public_622dc84
