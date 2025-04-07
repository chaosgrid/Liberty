#include "DebugLib-PCH.h"


#define public_65d49b3 _public_65d49b3
#define public_65d49b5 _public_65d49b5
#define public_65d49d9 _public_65d49d9
#define public_65d49dd _public_65d49dd
#define public_65d49e2 _public_65d49e2
#define public_65d49f2 _public_65d49f2
#define public_65d4a08 _public_65d4a08
#define public_65d4a34 _public_65d4a34

PROC_DECLARE(0x65d49a0, internal_65d49a0, public_65d49a0);
extern "C" NAKED register_t __cdecl internal_65d49a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65e13c4]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_65d49f2
        mov ebp, dword ptr ss : [esp+0x18]
        public_65d49b3 : nop
        mov esi, ebp
        public_65d49b5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_65d49dd
        test cl, cl
        je public_65d49d9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_65d49dd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_65d49b5
        public_65d49d9 : nop
        xor eax, eax
        jmp public_65d49e2
        public_65d49dd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_65d49e2 : nop
        test eax, eax
        je public_65d4a08
        mov eax, dword ptr ds : [edi*8+public_65e13cc]
        inc edi
        test eax, eax
        jne public_65d49b3
        public_65d49f2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_65d4a08 : nop
        mov eax, dword ptr ds : [edi*8+public_65e13c8]
        test eax, eax
        jns public_65d4a34
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
        public_65d4a34 : nop
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
        UNREACHABLE_TRAP(0x65d49a0)
    }
}

#undef public_65d49b3
#undef public_65d49b5
#undef public_65d49d9
#undef public_65d49dd
#undef public_65d49e2
#undef public_65d49f2
#undef public_65d4a08
#undef public_65d4a34
