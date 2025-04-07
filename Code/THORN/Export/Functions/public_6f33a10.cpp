#include "THORN-PCH.h"


#define public_6f33a23 _public_6f33a23
#define public_6f33a25 _public_6f33a25
#define public_6f33a49 _public_6f33a49
#define public_6f33a4d _public_6f33a4d
#define public_6f33a52 _public_6f33a52
#define public_6f33a62 _public_6f33a62
#define public_6f33a78 _public_6f33a78
#define public_6f33aa4 _public_6f33aa4

PROC_DECLARE(0x6f33a10, internal_6f33a10, public_6f33a10);
extern "C" NAKED register_t __cdecl internal_6f33a10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f5a9fc]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6f33a62
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f33a23 : nop
        mov esi, ebp
        public_6f33a25 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f33a4d
        test cl, cl
        je public_6f33a49
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f33a4d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f33a25
        public_6f33a49 : nop
        xor eax, eax
        jmp public_6f33a52
        public_6f33a4d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f33a52 : nop
        test eax, eax
        je public_6f33a78
        mov eax, dword ptr ds : [edi*8+public_6f5aa04]
        inc edi
        test eax, eax
        jne public_6f33a23
        public_6f33a62 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6f33a78 : nop
        mov eax, dword ptr ds : [edi*8+public_6f5aa00]
        test eax, eax
        jns public_6f33aa4
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
        public_6f33aa4 : nop
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
        UNREACHABLE_TRAP(0x6f33a10)
    }
}

#undef public_6f33a23
#undef public_6f33a25
#undef public_6f33a49
#undef public_6f33a4d
#undef public_6f33a52
#undef public_6f33a62
#undef public_6f33a78
#undef public_6f33aa4
