#include "Alchemy-PCH.h"


#define public_62261b3 _public_62261b3
#define public_62261b5 _public_62261b5
#define public_62261d9 _public_62261d9
#define public_62261dd _public_62261dd
#define public_62261e2 _public_62261e2
#define public_62261f2 _public_62261f2
#define public_6226208 _public_6226208
#define public_6226234 _public_6226234

PROC_DECLARE(0x62261a0, internal_62261a0, public_62261a0);
extern "C" NAKED register_t __cdecl internal_62261a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624e048]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_62261f2
        mov ebp, dword ptr ss : [esp+0x18]
        public_62261b3 : nop
        mov esi, ebp
        public_62261b5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_62261dd
        test cl, cl
        je public_62261d9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_62261dd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_62261b5
        public_62261d9 : nop
        xor eax, eax
        jmp public_62261e2
        public_62261dd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_62261e2 : nop
        test eax, eax
        je public_6226208
        mov eax, dword ptr ds : [edi*8+public_624e050]
        inc edi
        test eax, eax
        jne public_62261b3
        public_62261f2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6226208 : nop
        mov eax, dword ptr ds : [edi*8+public_624e04c]
        test eax, eax
        jns public_6226234
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
        public_6226234 : nop
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
        UNREACHABLE_TRAP(0x62261a0)
    }
}

#undef public_62261b3
#undef public_62261b5
#undef public_62261d9
#undef public_62261dd
#undef public_62261e2
#undef public_62261f2
#undef public_6226208
#undef public_6226234
