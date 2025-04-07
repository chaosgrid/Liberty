#include "Common-PCH.h"


#define public_6276280 _public_6276280
#define public_62762a6 _public_62762a6
#define public_62762a8 _public_62762a8
#define public_62762ba _public_62762ba
#define public_62762c0 _public_62762c0
#define public_62762ce _public_62762ce
#define public_62762d9 _public_62762d9
#define public_6276300 _public_6276300
#define public_6276323 _public_6276323
#define public_6276325 _public_6276325
#define public_6276334 _public_6276334
#define public_6276357 _public_6276357
#define public_627635d _public_627635d
#define public_6276394 _public_6276394

PROC_DECLARE(0x6276250, internal_6276250, public_6276250);
extern "C" NAKED register_t __cdecl internal_6276250()
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
        je public_62762a6
        inc eax
        lea edx, ss:[esp+0x410]
        sub edx, eax
        mov edi, edi
        public_6276280 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_6276280
        lea ecx, ss:[esp+0x410]
        push 0x2F
        push ecx
        call dword ptr ds : [public_6399304]
        add esp, 8
        test eax, eax
        je public_62762a6
        mov byte ptr ds : [eax], 0
        jmp public_62762ba
        public_62762a6 : nop
        xor eax, eax
        public_62762a8 : nop
        mov cl, byte ptr ds : [eax+public_63997b0]
        mov byte ptr ss : [esp+eax+0x410], cl
        inc eax
        test cl, cl
        jne public_62762a8
        public_62762ba : nop
        xor edi, edi
        lea esp, ss:[esp]
        public_62762c0 : nop
        mov ecx, dword ptr ds : [esi+0x168]
        test ecx, ecx
        jne public_62762ce
        xor eax, eax
        jmp public_62762d9
        public_62762ce : nop
        mov eax, dword ptr ds : [esi+0x16C]
        sub eax, ecx
        sar eax, 2
        public_62762d9 : nop
        cmp edi, eax
        jge public_627635d
        mov edx, dword ptr ds : [esi+0x168]
        mov eax, dword ptr ds : [edx+edi*4]
        mov eax, dword ptr ds : [eax]
        push 0x2F
        push eax
        call ebx
        add esp, 8
        test eax, eax
        je public_6276323
        inc eax
        lea edx, ss:[esp+0x10]
        sub edx, eax
        nop 
        public_6276300 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_6276300
        lea ecx, ss:[esp+0x10]
        push 0x2F
        push ecx
        call dword ptr ds : [public_6399304]
        add esp, 8
        test eax, eax
        je public_6276323
        mov byte ptr ds : [eax], 0
        jmp public_6276334
        public_6276323 : nop
        xor eax, eax
        public_6276325 : nop
        mov cl, byte ptr ds : [eax+public_63997b0]
        mov byte ptr ss : [esp+eax+0x10], cl
        inc eax
        test cl, cl
        jne public_6276325
        public_6276334 : nop
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x414]
        push eax
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        jne public_6276357
        mov ecx, dword ptr ds : [esi+0x168]
        mov ebp, dword ptr ds : [ecx+edi*4]
        public_6276357 : nop
        inc edi
        jmp public_62762c0
        public_627635d : nop
        test ebp, ebp
        jne public_6276394
        mov edx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ss : [esp+0x814]
        push edx
        mov edx, dword ptr ss : [esp+0x81C]
        push ecx
        push edx
        push 0x5C8
/*FIXUP push offset public_639a188 @0x627637a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100001
/*FIXUP push offset public_639a0e0 @0x6276384*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a0e0
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x1C
        public_6276394 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x800
        ret 8
        UNREACHABLE_TRAP(0x6276250)
    }
}

#undef public_6276280
#undef public_62762a6
#undef public_62762a8
#undef public_62762ba
#undef public_62762c0
#undef public_62762ce
#undef public_62762d9
#undef public_6276300
#undef public_6276323
#undef public_6276325
#undef public_6276334
#undef public_6276357
#undef public_627635d
#undef public_6276394
