#include "THORN-PCH.h"


#define public_6f33483 _public_6f33483
#define public_6f33485 _public_6f33485
#define public_6f334a9 _public_6f334a9
#define public_6f334ad _public_6f334ad
#define public_6f334b2 _public_6f334b2
#define public_6f334c2 _public_6f334c2
#define public_6f334d8 _public_6f334d8
#define public_6f33504 _public_6f33504

PROC_DECLARE(0x6f33470, internal_6f33470, public_6f33470);
extern "C" NAKED register_t __cdecl internal_6f33470()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f5a99c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6f334c2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f33483 : nop
        mov esi, ebp
        public_6f33485 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f334ad
        test cl, cl
        je public_6f334a9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f334ad
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f33485
        public_6f334a9 : nop
        xor eax, eax
        jmp public_6f334b2
        public_6f334ad : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f334b2 : nop
        test eax, eax
        je public_6f334d8
        mov eax, dword ptr ds : [edi*8+public_6f5a9a4]
        inc edi
        test eax, eax
        jne public_6f33483
        public_6f334c2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6f334d8 : nop
        mov eax, dword ptr ds : [edi*8+public_6f5a9a0]
        test eax, eax
        jns public_6f33504
        mov ecx, dword ptr ss : [esp+0x14]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+ecx]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6f33504 : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+edx]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f33470)
    }
}

#undef public_6f33483
#undef public_6f33485
#undef public_6f334a9
#undef public_6f334ad
#undef public_6f334b2
#undef public_6f334c2
#undef public_6f334d8
#undef public_6f33504
