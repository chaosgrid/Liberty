#include "DebugLib-PCH.h"


#define public_65d68a3 _public_65d68a3
#define public_65d68a5 _public_65d68a5
#define public_65d68c9 _public_65d68c9
#define public_65d68cd _public_65d68cd
#define public_65d68d2 _public_65d68d2
#define public_65d68e2 _public_65d68e2
#define public_65d68f8 _public_65d68f8
#define public_65d6924 _public_65d6924

PROC_DECLARE(0x65d6890, internal_65d6890, public_65d6890);
extern "C" NAKED register_t __cdecl internal_65d6890()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65e1528]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_65d68e2
        mov ebp, dword ptr ss : [esp+0x18]
        public_65d68a3 : nop
        mov esi, ebp
        public_65d68a5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_65d68cd
        test cl, cl
        je public_65d68c9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_65d68cd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_65d68a5
        public_65d68c9 : nop
        xor eax, eax
        jmp public_65d68d2
        public_65d68cd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_65d68d2 : nop
        test eax, eax
        je public_65d68f8
        mov eax, dword ptr ds : [edi*8+public_65e1530]
        inc edi
        test eax, eax
        jne public_65d68a3
        public_65d68e2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_65d68f8 : nop
        mov eax, dword ptr ds : [edi*8+public_65e152c]
        test eax, eax
        jns public_65d6924
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
        public_65d6924 : nop
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
        UNREACHABLE_TRAP(0x65d6890)
    }
}

#undef public_65d68a3
#undef public_65d68a5
#undef public_65d68c9
#undef public_65d68cd
#undef public_65d68d2
#undef public_65d68e2
#undef public_65d68f8
#undef public_65d6924
