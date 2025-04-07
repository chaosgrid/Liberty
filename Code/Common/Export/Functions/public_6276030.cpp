#include "Common-PCH.h"


#define public_6276060 _public_6276060
#define public_6276083 _public_6276083
#define public_6276085 _public_6276085
#define public_6276094 _public_6276094
#define public_6276096 _public_6276096
#define public_62760a4 _public_62760a4
#define public_62760af _public_62760af
#define public_62760d8 _public_62760d8
#define public_62760fe _public_62760fe
#define public_6276100 _public_6276100
#define public_6276112 _public_6276112
#define public_6276135 _public_6276135
#define public_627613b _public_627613b
#define public_627616f _public_627616f

PROC_DECLARE(0x6276030, internal_6276030, public_6276030);
extern "C" NAKED register_t __cdecl internal_6276030()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x800
        push ebx
        mov ebx, dword ptr ds : [public_6399300]
        push ebp
        push esi
        push edi
        push 0x2F
        push eax
        mov esi, ecx
        xor ebp, ebp
        call ebx
        add esp, 8
        test eax, eax
        je public_6276083
        inc eax
        lea edx, ss:[esp+0x10]
        sub edx, eax
        nop 
        lea esp, ss:[esp]
        public_6276060 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_6276060
        lea ecx, ss:[esp+0x10]
        push 0x2F
        push ecx
        call dword ptr ds : [public_6399304]
        add esp, 8
        test eax, eax
        je public_6276083
        mov byte ptr ds : [eax], 0
        jmp public_6276094
        public_6276083 : nop
        xor eax, eax
        public_6276085 : nop
        mov cl, byte ptr ds : [eax+public_63997b0]
        mov byte ptr ss : [esp+eax+0x10], cl
        inc eax
        test cl, cl
        jne public_6276085
        public_6276094 : nop
        xor edi, edi
        public_6276096 : nop
        mov ecx, dword ptr ds : [esi+0x138]
        test ecx, ecx
        jne public_62760a4
        xor eax, eax
        jmp public_62760af
        public_62760a4 : nop
        mov eax, dword ptr ds : [esi+0x13C]
        sub eax, ecx
        sar eax, 2
        public_62760af : nop
        cmp edi, eax
        jge public_627613b
        mov edx, dword ptr ds : [esi+0x138]
        mov eax, dword ptr ds : [edx+edi*4]
        mov eax, dword ptr ds : [eax]
        push 0x2F
        push eax
        call ebx
        add esp, 8
        test eax, eax
        je public_62760fe
        inc eax
        lea edx, ss:[esp+0x410]
        sub edx, eax
        public_62760d8 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_62760d8
        lea ecx, ss:[esp+0x410]
        push 0x2F
        push ecx
        call dword ptr ds : [public_6399304]
        add esp, 8
        test eax, eax
        je public_62760fe
        mov byte ptr ds : [eax], 0
        jmp public_6276112
        public_62760fe : nop
        xor eax, eax
        public_6276100 : nop
        mov cl, byte ptr ds : [eax+public_63997b0]
        mov byte ptr ss : [esp+eax+0x410], cl
        inc eax
        test cl, cl
        jne public_6276100
        public_6276112 : nop
        lea edx, ss:[esp+0x410]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        jne public_6276135
        mov ecx, dword ptr ds : [esi+0x138]
        mov ebp, dword ptr ds : [ecx+edi*4]
        public_6276135 : nop
        inc edi
        jmp public_6276096
        public_627613b : nop
        test ebp, ebp
        jne public_627616f
        mov edx, dword ptr ds : [esi+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x81C]
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        push 0x578
/*FIXUP push offset public_639a188 @0x6276155*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100001
/*FIXUP push offset public_639a9a0 @0x627615f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a9a0
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x1C
        public_627616f : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x800
        ret 8
        UNREACHABLE_TRAP(0x6276030)
    }
}

#undef public_6276060
#undef public_6276083
#undef public_6276085
#undef public_6276094
#undef public_6276096
#undef public_62760a4
#undef public_62760af
#undef public_62760d8
#undef public_62760fe
#undef public_6276100
#undef public_6276112
#undef public_6276135
#undef public_627613b
#undef public_627616f
