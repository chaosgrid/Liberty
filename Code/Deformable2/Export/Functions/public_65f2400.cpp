#include "Deformable2-PCH.h"


#define public_65f2413 _public_65f2413
#define public_65f2415 _public_65f2415
#define public_65f2439 _public_65f2439
#define public_65f243d _public_65f243d
#define public_65f2442 _public_65f2442
#define public_65f2452 _public_65f2452
#define public_65f2468 _public_65f2468
#define public_65f2497 _public_65f2497

PROC_DECLARE(0x65f2400, internal_65f2400, public_65f2400);
extern "C" NAKED register_t __cdecl internal_65f2400()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66012d0]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_65f2452
        mov ebp, dword ptr ss : [esp+0x18]
        public_65f2413 : nop
        mov esi, ebp
        public_65f2415 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_65f243d
        test cl, cl
        je public_65f2439
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_65f243d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_65f2415
        public_65f2439 : nop
        xor eax, eax
        jmp public_65f2442
        public_65f243d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_65f2442 : nop
        test eax, eax
        je public_65f2468
        mov eax, dword ptr ds : [edi*8+public_66012d8]
        inc edi
        test eax, eax
        jne public_65f2413
        public_65f2452 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_65f2468 : nop
        mov eax, dword ptr ds : [edi*8+public_66012d4]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_65f2497
        mov edx, dword ptr ds : [ecx+8]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+edx]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_65f2497 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi+eax]
        add esi, eax
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x65f2400)
    }
}

#undef public_65f2413
#undef public_65f2415
#undef public_65f2439
#undef public_65f243d
#undef public_65f2442
#undef public_65f2452
#undef public_65f2468
#undef public_65f2497
