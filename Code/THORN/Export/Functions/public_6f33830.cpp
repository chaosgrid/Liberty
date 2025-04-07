#include "THORN-PCH.h"


#define public_6f33843 _public_6f33843
#define public_6f33845 _public_6f33845
#define public_6f33869 _public_6f33869
#define public_6f3386d _public_6f3386d
#define public_6f33872 _public_6f33872
#define public_6f33882 _public_6f33882
#define public_6f33898 _public_6f33898
#define public_6f338c4 _public_6f338c4

PROC_DECLARE(0x6f33830, internal_6f33830, public_6f33830);
extern "C" NAKED register_t __cdecl internal_6f33830()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f5a9dc]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6f33882
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f33843 : nop
        mov esi, ebp
        public_6f33845 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f3386d
        test cl, cl
        je public_6f33869
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f3386d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f33845
        public_6f33869 : nop
        xor eax, eax
        jmp public_6f33872
        public_6f3386d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f33872 : nop
        test eax, eax
        je public_6f33898
        mov eax, dword ptr ds : [edi*8+public_6f5a9e4]
        inc edi
        test eax, eax
        jne public_6f33843
        public_6f33882 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6f33898 : nop
        mov eax, dword ptr ds : [edi*8+public_6f5a9e0]
        test eax, eax
        jns public_6f338c4
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
        public_6f338c4 : nop
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
        UNREACHABLE_TRAP(0x6f33830)
    }
}

#undef public_6f33843
#undef public_6f33845
#undef public_6f33869
#undef public_6f3386d
#undef public_6f33872
#undef public_6f33882
#undef public_6f33898
#undef public_6f338c4
