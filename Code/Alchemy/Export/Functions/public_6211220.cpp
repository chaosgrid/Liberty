#include "Alchemy-PCH.h"


#define public_6211233 _public_6211233
#define public_6211235 _public_6211235
#define public_6211259 _public_6211259
#define public_621125d _public_621125d
#define public_6211262 _public_6211262
#define public_6211272 _public_6211272
#define public_6211288 _public_6211288
#define public_62112b4 _public_62112b4

PROC_DECLARE(0x6211220, internal_6211220, public_6211220);
extern "C" NAKED register_t __cdecl internal_6211220()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624c450]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6211272
        mov ebp, dword ptr ss : [esp+0x18]
        public_6211233 : nop
        mov esi, ebp
        public_6211235 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_621125d
        test cl, cl
        je public_6211259
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_621125d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6211235
        public_6211259 : nop
        xor eax, eax
        jmp public_6211262
        public_621125d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6211262 : nop
        test eax, eax
        je public_6211288
        mov eax, dword ptr ds : [edi*8+public_624c458]
        inc edi
        test eax, eax
        jne public_6211233
        public_6211272 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6211288 : nop
        mov eax, dword ptr ds : [edi*8+public_624c454]
        test eax, eax
        jns public_62112b4
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
        public_62112b4 : nop
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
        UNREACHABLE_TRAP(0x6211220)
    }
}

#undef public_6211233
#undef public_6211235
#undef public_6211259
#undef public_621125d
#undef public_6211262
#undef public_6211272
#undef public_6211288
#undef public_62112b4
