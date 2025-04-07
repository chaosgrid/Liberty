#include "Alchemy-PCH.h"


#define public_62349b3 _public_62349b3
#define public_62349b5 _public_62349b5
#define public_62349d9 _public_62349d9
#define public_62349dd _public_62349dd
#define public_62349e2 _public_62349e2
#define public_62349f2 _public_62349f2
#define public_6234a08 _public_6234a08
#define public_6234a34 _public_6234a34

PROC_DECLARE(0x62349a0, internal_62349a0, public_62349a0);
extern "C" NAKED register_t __cdecl internal_62349a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624e830]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_62349f2
        mov ebp, dword ptr ss : [esp+0x18]
        public_62349b3 : nop
        mov esi, ebp
        public_62349b5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_62349dd
        test cl, cl
        je public_62349d9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_62349dd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_62349b5
        public_62349d9 : nop
        xor eax, eax
        jmp public_62349e2
        public_62349dd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_62349e2 : nop
        test eax, eax
        je public_6234a08
        mov eax, dword ptr ds : [edi*8+public_624e838]
        inc edi
        test eax, eax
        jne public_62349b3
        public_62349f2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6234a08 : nop
        mov eax, dword ptr ds : [edi*8+public_624e834]
        test eax, eax
        jns public_6234a34
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
        public_6234a34 : nop
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
        UNREACHABLE_TRAP(0x62349a0)
    }
}

#undef public_62349b3
#undef public_62349b5
#undef public_62349d9
#undef public_62349dd
#undef public_62349e2
#undef public_62349f2
#undef public_6234a08
#undef public_6234a34
