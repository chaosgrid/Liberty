#include "Alchemy-PCH.h"


#define public_62452d3 _public_62452d3
#define public_62452d5 _public_62452d5
#define public_62452f9 _public_62452f9
#define public_62452fd _public_62452fd
#define public_6245302 _public_6245302
#define public_6245312 _public_6245312
#define public_6245328 _public_6245328
#define public_6245354 _public_6245354

PROC_DECLARE(0x62452c0, internal_62452c0, public_62452c0);
extern "C" NAKED register_t __cdecl internal_62452c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624fe00]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6245312
        mov ebp, dword ptr ss : [esp+0x18]
        public_62452d3 : nop
        mov esi, ebp
        public_62452d5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_62452fd
        test cl, cl
        je public_62452f9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_62452fd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_62452d5
        public_62452f9 : nop
        xor eax, eax
        jmp public_6245302
        public_62452fd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6245302 : nop
        test eax, eax
        je public_6245328
        mov eax, dword ptr ds : [edi*8+public_624fe08]
        inc edi
        test eax, eax
        jne public_62452d3
        public_6245312 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6245328 : nop
        mov eax, dword ptr ds : [edi*8+public_624fe04]
        test eax, eax
        jns public_6245354
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
        public_6245354 : nop
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
        UNREACHABLE_TRAP(0x62452c0)
    }
}

#undef public_62452d3
#undef public_62452d5
#undef public_62452f9
#undef public_62452fd
#undef public_6245302
#undef public_6245312
#undef public_6245328
#undef public_6245354
