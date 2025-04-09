#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45da10);
CLANG_FORWARD_PROC_SYMBOL(public_45da50);
CLANG_FORWARD_PROC_SYMBOL(public_462e30);
CLANG_FORWARD_PROC_SYMBOL(public_46d920);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_JUMP_SYMBOL(public_5bad9e);

#define public_462e87 _public_462e87
#define public_462f74 _public_462f74
#define public_4630c8 _public_4630c8
#define public_46318b _public_46318b
#define public_463267 _public_463267
#define public_46326f _public_46326f
#define public_463288 _public_463288
#define public_4632b2 _public_4632b2
#define public_4632b4 _public_4632b4
#define public_4632bf _public_4632bf
#define public_4632d6 _public_4632d6
#define public_4632d8 _public_4632d8

PROC_DECLARE(0x462e30, internal_462e30, public_462e30);
extern "C" NAKED register_t __cdecl internal_462e30()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bad9e @0x462e38*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bad9e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_66da48]
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x334], eax
        mov eax, dword ptr ds : [esi+0x35C]
        xor ebp, ebp
        cmp eax, ebp
        push edi
        mov dword ptr ds : [esi+0x338], ebp
        je public_462e87
        mov eax, dword ptr ds : [esi+0x358]
        mov ecx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [esi+0x334], ecx
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0x338], edx
        public_462e87 : nop
        mov eax, dword ptr ds : [esi+0x334]
        cmp eax, dword ptr ds : [public_66da48]
        mov eax, dword ptr ds : [esi+0x494]
        jne public_462f74
        and byte ptr ds : [eax+0x6C], 0xFE
        mov eax, dword ptr ds : [esi+0x498]
        and byte ptr ds : [eax+0x6C], 0xFE
        mov ecx, dword ptr ds : [esi+0x49C]
        call public_57b370
        push 1
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c62c0]
        mov ecx, dword ptr ds : [esi+0x49C]
        push eax
        mov dword ptr ss : [esp+0x28], ebp
        call public_57b470
        or edi, 0xFFFFFFFF
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x24], edi
        call dword ptr ds : [public_5c62bc]
        push 0x9CA4
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c62b8]
        mov ecx, dword ptr ds : [esi+0x49C]
        push eax
        mov dword ptr ss : [esp+0x28], 1
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x24], edi
        call dword ptr ds : [public_5c62b4]
        mov edx, dword ptr ds : [public_5c62cc]
        lea ecx, ds:[esi+0x3B4]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov ecx, dword ptr ds : [esi+0x49C]
        lea eax, ss:[esp+0x14]
        mov ebx, 2
        push eax
        mov dword ptr ss : [esp+0x28], ebx
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x24], edi
        call dword ptr ds : [public_5c62c8]
        mov ecx, dword ptr ds : [public_66d3f0]
        cmp ecx, ebp
        je public_4632bf
        test byte ptr ds : [esi+0x6C], bl
        jne public_4632bf
        push ebp
        call public_45da10
        push ebp
        jmp public_4632b4
        public_462f74 : nop
        or byte ptr ds : [eax+0x6C], 1
        mov eax, dword ptr ds : [esi+0x498]
        or byte ptr ds : [eax+0x6C], 1
        mov ecx, dword ptr ds : [esi+0x49C]
        call public_57b370
        mov ebx, dword ptr ds : [public_5c62c0]
        push 1
        lea ecx, ss:[esp+0x18]
        call ebx
        mov ecx, dword ptr ds : [esi+0x49C]
        push eax
        mov dword ptr ss : [esp+0x28], 3
        call public_57b470
        or edi, 0xFFFFFFFF
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x24], edi
        call dword ptr ds : [public_5c62bc]
        push 0x9CA4
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c62b8]
        mov ecx, dword ptr ds : [esi+0x49C]
        push eax
        mov dword ptr ss : [esp+0x28], 4
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x24], edi
        call dword ptr ds : [public_5c62b4]
        cmp dword ptr ds : [esi+0x338], ebp
        jne public_4630c8
        mov edx, dword ptr ds : [public_5c62cc]
        lea ecx, ds:[esi+0x36C]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov ecx, dword ptr ds : [esi+0x49C]
        lea eax, ss:[esp+0x14]
        push eax
        mov dword ptr ss : [esp+0x28], 5
        call public_57b470
        mov ebp, dword ptr ds : [public_5c62c8]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x24], edi
        call ebp
        mov eax, dword ptr ds : [esi+0x494]
        mov ecx, dword ptr ds : [eax+0x394]
        mov ecx, dword ptr ds : [ecx]
        add eax, 0x394
        call public_57b370
        mov eax, dword ptr ds : [public_5c62cc]
        lea edx, ds:[esi+0x384]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi+0x494]
        mov edx, dword ptr ds : [eax+0x394]
        add eax, 0x394
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x28], 6
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x24], edi
        call ebp
        mov eax, dword ptr ds : [esi+0x498]
        add eax, 0x394
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        call public_57b370
        mov edx, dword ptr ds : [public_5c62cc]
        lea ecx, ds:[esi+0x390]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x24], 7
        jmp public_46318b
        public_4630c8 : nop
        mov ecx, dword ptr ds : [public_5c62cc]
        lea eax, ds:[esi+0x378]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [esi+0x49C]
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x28], 8
        call public_57b470
        mov ebp, dword ptr ds : [public_5c62c8]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x24], edi
        call ebp
        mov eax, dword ptr ds : [esi+0x494]
        add eax, 0x394
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        call public_57b370
        mov edx, dword ptr ds : [public_5c62cc]
        lea ecx, ds:[esi+0x39C]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [esi+0x494]
        mov edx, dword ptr ds : [eax+0x394]
        add eax, 0x394
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x28], 9
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x24], edi
        call ebp
        mov eax, dword ptr ds : [esi+0x498]
        add eax, 0x394
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        call public_57b370
        mov edx, dword ptr ds : [public_5c62cc]
        lea ecx, ds:[esi+0x3A8]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x24], 0xA
        public_46318b : nop
        mov eax, dword ptr ds : [esi+0x498]
        mov edx, dword ptr ds : [eax+0x394]
        add eax, 0x394
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [edx]
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x24], edi
        call ebp
        mov eax, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x14], eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [esi+0x49C]
        mov dword ptr ss : [esp+0x28], 0xB
        call public_57b470
        push 1
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x28], edi
        call ebx
        mov ecx, dword ptr ds : [esi+0x49C]
        push eax
        mov dword ptr ss : [esp+0x28], 0xC
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x24], edi
        call dword ptr ds : [public_5c62bc]
        push 0xD5EC
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c62b8]
        mov ecx, dword ptr ds : [esi+0x49C]
        push eax
        mov dword ptr ss : [esp+0x28], 0xD
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x24], edi
        call dword ptr ds : [public_5c62b4]
        mov edi, dword ptr ds : [esi+0x32C]
        test edi, edi
        je public_463288
        lea ebx, ds:[esi+0x334]
        push ebx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        call public_46d920
        mov edi, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        je public_463267
        mov ecx, dword ptr ds : [ebx]
        cmp ecx, dword ptr ds : [eax+0xC]
        ja public_463267
        lea eax, ss:[esp+0x10]
        jmp public_46326f
        public_463267 : nop
        mov dword ptr ss : [esp+0x14], edi
        lea eax, ss:[esp+0x14]
        public_46326f : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        je public_463288
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_463288
        mov ecx, dword ptr ds : [esi+0x49C]
        push eax
        call public_57b3e0
        public_463288 : nop
        mov ecx, dword ptr ds : [public_66d3f0]
        test ecx, ecx
        je public_4632bf
        mov al, byte ptr ds : [esi+0x6C]
        mov ebx, 2
        test bl, al
        jne public_4632bf
        push 1
        call public_45da10
        mov eax, dword ptr ds : [esi+0x338]
        test eax, eax
        jne public_4632b2
        push ebx
        jmp public_4632b4
        public_4632b2 : nop
        push 1
        public_4632b4 : nop
        mov ecx, dword ptr ds : [public_66d3f0]
        call public_45da50
        public_4632bf : nop
        mov eax, dword ptr ds : [esi+0x350]
        mov esi, dword ptr ds : [esi+0x490]
        test eax, eax
        mov al, byte ptr ds : [esi+0x6C]
        jne public_4632d6
        and al, 0xFE
        jmp public_4632d8
        public_4632d6 : nop
        or al, 1
        public_4632d8 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov byte ptr ds : [esi+0x6C], al
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x462e30)
    }
}

#undef public_462e87
#undef public_462f74
#undef public_4630c8
#undef public_46318b
#undef public_463267
#undef public_46326f
#undef public_463288
#undef public_4632b2
#undef public_4632b4
#undef public_4632bf
#undef public_4632d6
#undef public_4632d8
