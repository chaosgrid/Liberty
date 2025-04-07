#include "Alchemy-PCH.h"


#define public_6230fc3 _public_6230fc3
#define public_6230fc5 _public_6230fc5
#define public_6230fe9 _public_6230fe9
#define public_6230fed _public_6230fed
#define public_6230ff2 _public_6230ff2
#define public_6231002 _public_6231002
#define public_6231018 _public_6231018
#define public_6231044 _public_6231044

PROC_DECLARE(0x6230fb0, internal_6230fb0, public_6230fb0);
extern "C" NAKED register_t __cdecl internal_6230fb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624e800]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6231002
        mov ebp, dword ptr ss : [esp+0x18]
        public_6230fc3 : nop
        mov esi, ebp
        public_6230fc5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6230fed
        test cl, cl
        je public_6230fe9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6230fed
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6230fc5
        public_6230fe9 : nop
        xor eax, eax
        jmp public_6230ff2
        public_6230fed : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6230ff2 : nop
        test eax, eax
        je public_6231018
        mov eax, dword ptr ds : [edi*8+public_624e808]
        inc edi
        test eax, eax
        jne public_6230fc3
        public_6231002 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6231018 : nop
        mov eax, dword ptr ds : [edi*8+public_624e804]
        test eax, eax
        jns public_6231044
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
        public_6231044 : nop
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
        UNREACHABLE_TRAP(0x6230fb0)
    }
}

#undef public_6230fc3
#undef public_6230fc5
#undef public_6230fe9
#undef public_6230fed
#undef public_6230ff2
#undef public_6231002
#undef public_6231018
#undef public_6231044
