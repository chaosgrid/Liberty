#include "Alchemy-PCH.h"


#define public_620ba23 _public_620ba23
#define public_620ba25 _public_620ba25
#define public_620ba49 _public_620ba49
#define public_620ba4d _public_620ba4d
#define public_620ba52 _public_620ba52
#define public_620ba62 _public_620ba62
#define public_620ba78 _public_620ba78
#define public_620baa4 _public_620baa4

PROC_DECLARE(0x620ba10, internal_620ba10, public_620ba10);
extern "C" NAKED register_t __cdecl internal_620ba10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624bda0]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_620ba62
        mov ebp, dword ptr ss : [esp+0x18]
        public_620ba23 : nop
        mov esi, ebp
        public_620ba25 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_620ba4d
        test cl, cl
        je public_620ba49
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_620ba4d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_620ba25
        public_620ba49 : nop
        xor eax, eax
        jmp public_620ba52
        public_620ba4d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_620ba52 : nop
        test eax, eax
        je public_620ba78
        mov eax, dword ptr ds : [edi*8+public_624bda8]
        inc edi
        test eax, eax
        jne public_620ba23
        public_620ba62 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_620ba78 : nop
        mov eax, dword ptr ds : [edi*8+public_624bda4]
        test eax, eax
        jns public_620baa4
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
        public_620baa4 : nop
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
        UNREACHABLE_TRAP(0x620ba10)
    }
}

#undef public_620ba23
#undef public_620ba25
#undef public_620ba49
#undef public_620ba4d
#undef public_620ba52
#undef public_620ba62
#undef public_620ba78
#undef public_620baa4
