#include "THORN-PCH.h"


#define public_6f33753 _public_6f33753
#define public_6f33755 _public_6f33755
#define public_6f33779 _public_6f33779
#define public_6f3377d _public_6f3377d
#define public_6f33782 _public_6f33782
#define public_6f33792 _public_6f33792
#define public_6f337a8 _public_6f337a8
#define public_6f337d4 _public_6f337d4

PROC_DECLARE(0x6f33740, internal_6f33740, public_6f33740);
extern "C" NAKED register_t __cdecl internal_6f33740()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f5a9cc]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6f33792
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f33753 : nop
        mov esi, ebp
        public_6f33755 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f3377d
        test cl, cl
        je public_6f33779
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f3377d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f33755
        public_6f33779 : nop
        xor eax, eax
        jmp public_6f33782
        public_6f3377d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f33782 : nop
        test eax, eax
        je public_6f337a8
        mov eax, dword ptr ds : [edi*8+public_6f5a9d4]
        inc edi
        test eax, eax
        jne public_6f33753
        public_6f33792 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6f337a8 : nop
        mov eax, dword ptr ds : [edi*8+public_6f5a9d0]
        test eax, eax
        jns public_6f337d4
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
        public_6f337d4 : nop
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
        UNREACHABLE_TRAP(0x6f33740)
    }
}

#undef public_6f33753
#undef public_6f33755
#undef public_6f33779
#undef public_6f3377d
#undef public_6f33782
#undef public_6f33792
#undef public_6f337a8
#undef public_6f337d4
