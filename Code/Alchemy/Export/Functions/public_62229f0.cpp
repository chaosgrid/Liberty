#include "Alchemy-PCH.h"


#define public_6222a03 _public_6222a03
#define public_6222a05 _public_6222a05
#define public_6222a29 _public_6222a29
#define public_6222a2d _public_6222a2d
#define public_6222a32 _public_6222a32
#define public_6222a42 _public_6222a42
#define public_6222a58 _public_6222a58
#define public_6222a84 _public_6222a84

PROC_DECLARE(0x62229f0, internal_62229f0, public_62229f0);
extern "C" NAKED register_t __cdecl internal_62229f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624da1c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6222a42
        mov ebp, dword ptr ss : [esp+0x18]
        public_6222a03 : nop
        mov esi, ebp
        public_6222a05 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6222a2d
        test cl, cl
        je public_6222a29
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6222a2d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6222a05
        public_6222a29 : nop
        xor eax, eax
        jmp public_6222a32
        public_6222a2d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6222a32 : nop
        test eax, eax
        je public_6222a58
        mov eax, dword ptr ds : [edi*8+public_624da24]
        inc edi
        test eax, eax
        jne public_6222a03
        public_6222a42 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6222a58 : nop
        mov eax, dword ptr ds : [edi*8+public_624da20]
        test eax, eax
        jns public_6222a84
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
        public_6222a84 : nop
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
        UNREACHABLE_TRAP(0x62229f0)
    }
}

#undef public_6222a03
#undef public_6222a05
#undef public_6222a29
#undef public_6222a2d
#undef public_6222a32
#undef public_6222a42
#undef public_6222a58
#undef public_6222a84
